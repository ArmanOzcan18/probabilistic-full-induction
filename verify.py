import sys
import subprocess
from collections import deque
from math import gcd
from math import lcm
 
prefix = ['extern void __VERIFIER_error() __attribute__ ((__noreturn__));\n',
'extern void __VERIFIER_assume(int);\n',
'void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }\n'
'extern int __VERIFIER_nondet_int(void);\n']

def preprocess(raw_input):
    input = []
    for line in raw_input:
        #remove lines with only spaces
        if line.isspace():
            continue
        #remove whitespace at the beginning and end of the line
        line = line.lstrip().rstrip() + '\n'
        #remove lines with comments
        if line.startswith('//'):
            continue
        #replace nondet_int() with __VERIFIER_nondet_int() for formatting
        if 'nondet_int()' in line:
            line = line.replace('nondet_int()', '__VERIFIER_nondet_int()')
        #expand initial curly brackets
        if line.startswith('}') and line != '}\n':
            input.append('}\n')
            line = line.replace('}', '').lstrip()
        if line.startswith('{') and line != '{\n':
            input.append('{\n')
            line = line.replace('{', '').lstrip()
        #replace random variables with their expected values
        if('·' in line):
            append_brackets = False
            if line.endswith('}\n'):
                line = line.replace('}', '').rstrip() + '\n'
                append_brackets = True
            line = line.replace(" ", "").replace(";", "")
            array = line.replace('\n','|').split("|")
            exp = 0
            for i in range(1, len(array)-1, 2):
                numbers = array[i].split('/')
                prob = float(numbers[0]) / float(numbers[1])
                value = float(array[i+1].replace('·','').replace('+',''))
                exp += prob * value
            line = array[0][:-1] + ' = ' + str(int(exp)) + ';\n'
            input.append(line)
            if append_brackets:
                input.append('}\n')
            continue
        #expand last curly brackets
        if line.endswith('{\n') and line != '{\n':
            line = line.replace('{', '')
            input.append(line.rstrip() + '\n')
            input.append('{\n')
            continue
        if line.endswith('}\n') and line != '}\n':
            line = line.replace('}', '')
            input.append(line.rstrip() + '\n')
            input.append('}\n')
            continue
        input.append(line)
    return input

def strip(input):
    beginning = []
    ending = []
    start = 0
    end = len(input)
    index = [i for i, line in enumerate(input) if line.startswith('int i;')][0]
    beginning = input[:index+1]
    start = index+1
    
    for index, line in reversed(list(enumerate(input))):
        ending.insert(0, line)
        if (index == len(input)-3 and line.startswith('assert') ) or line.startswith('for'):
            end = index
            break
    return beginning, input[start:end], ending

def rename(input, addition):
    seen_vars = []
    for index, line in enumerate(input):
        if line.startswith('int'):
            variable = line.replace('int', '').replace(' ', '').split('=')[0]
            if '[' in variable and ']' in variable:
                var_name = variable.split('[')[0]
            else:
                var_name = variable
            seen_vars.append(var_name)
        input[index] = replace(seen_vars, line, addition)
    return input

def replace(seen_vars, line, addition):
    if line.startswith('pif') or line.startswith('pelse') or line.startswith('else'):
        return line
    prefix = ''
    if line.startswith('for') or line.startswith('if') or line.startswith('else if'):
        prefix = line.split('(')[0]
        line = line.replace(prefix, '')
    for var in seen_vars:
        if var in line:
            if '_' not in var or not (c in ('0', '1') for c in var.split('_')[-1]):
                line = line.replace(var, var + '_' + addition)
            else:
                line = line.replace(var, var + addition)
    return prefix + line

def get_closing_brackets_index(list, i):
 
    # If input is invalid.
    if list[i] != '{\n':
        return -1
 
    # Create a deque to use it as a stack.
    d = deque()
 
    # Traverse through all elements
    # starting from i.
    for k in range(i, len(list)):
 
        # Pop a starting bracket
        # for every closing bracket
        if list[k] == '}\n':
            d.popleft()
 
        # Push all starting brackets
        elif list[k] == '{\n':
            d.append(list[i])
 
        # If deque becomes empty
        if not d:
            return k
 
    return -1

def get_closing_parantheses_index(str, i):
 
    # If input is invalid.
    if str[i] != '(':
        return -1
 
    # Create a deque to use it as a stack.
    d = deque()
 
    # Traverse through all elements
    # starting from i.
    for k in range(i, len(str)):
 
        # Pop a starting bracket
        # for every closing bracket
        if str[k] == ')':
            d.popleft()
 
        # Push all starting brackets
        elif str[k] == '(':
            d.append(str[i])
 
        # If deque becomes empty
        if not d:
            return k
 
    return -1

def get_opening_brackets_index(list, i):
 
    # If input is invalid.
    if list[i] != '}\n':
        return -1
 
    # Create a deque to use it as a stack.
    d = deque()
 
    # Traverse through all elements
    # starting from i.
    for k in reversed(range(0, i+1)):
 
        # Pop a starting bracket
        # for every closing bracket
        if list[k] == '{\n':
            d.popleft()
 
        # Push all starting brackets
        elif list[k] == '}\n':
            d.append(list[i])
 
        # If deque becomes empty
        if not d:
            return k
 
    return -1

def multiply(prob1, prob2):
    first = prob1.split('/')
    second = prob2.split('/')
    numerator = int(first[0]) * int(second[0])
    denominator = int(first[1]) * int(second[1])
    divisor = gcd(numerator, denominator)
    new_prob = str(int(numerator / divisor)) + '/' + str(int(denominator / divisor))
    return new_prob

def process_assertion(ending):
    index = [idx for idx, line in enumerate(ending) if line.startswith('assert')][0]
    assertion = ending[index]
    assertion = assertion.replace('assert', '').replace('\n', '').replace(';', '').replace(' ', '')
    assertion = assertion[1:-1]
    asserted_var = assertion.split('==')[0][2:-1]
    asserted_value = assertion.split('==')[1]
    return asserted_var, asserted_value

def asserted_var_name(asserted_var):
    if '[' in asserted_var and ']' in asserted_var:
        var_name = asserted_var.split('[')[0]
    else:
        var_name = asserted_var
    return var_name

def process_dict(dict):
    coefficients = {}
    multiple = 1
    for key in dict:
        multiple = lcm(multiple, int(dict[key].split('/')[1]))
    for key in dict:
        coefficients[key] = int(multiple / int(dict[key].split('/')[1])) * int(dict[key].split('/')[0])
    return coefficients, multiple

def rewrite_assertion(asserted_var, asserted_value, coefficients, multiple):
    if '/' in asserted_value:
        denominator = int(asserted_value.split('/')[1])
        numerator = asserted_value.split('/')[0]
    else:
        denominator = 1
        numerator = '(' + asserted_value + ')'
    total_multiple = lcm(multiple, denominator)
    if int(total_multiple/denominator) == 1:
        if(numerator[0] == '(' and numerator[-1] == ')'):
            rhs = numerator[1:-1]
        else:
            rhs = numerator
    else:
        rhs = str(int((total_multiple/denominator))) + ' * ' + numerator
    for index, (var, coeff) in enumerate(coefficients.items()):
        total_coeff = coeff * int(total_multiple/multiple)
        if index == 0:
            current_var = asserted_var.replace(asserted_var_name(asserted_var), var)
            if total_coeff != 1:
                lhs = str(total_coeff) + ' * ' + current_var
            else:
                lhs = current_var
        else:
            current_var = asserted_var.replace(asserted_var_name(asserted_var), var)
            if total_coeff != 1:
                rhs = rhs + ' - ' + str(total_coeff) + ' * ' + current_var
            else:
                rhs = rhs + ' - ' + current_var
    return lhs + ' == ' + rhs

def rewrite_ending(ending, rewritten_assertion):
    index = [idx for idx, line in enumerate(ending) if line.startswith('assert')][0]
    ending[index] = '__VERIFIER_assert(' + rewritten_assertion + ');\n'
    return ending

def convert(input, current_branch_prob, asserted_var, current_dict):
    if any("pif" in s for s in input):
        pif_index = [idx for idx, line in enumerate(input) if line.startswith('pif')][0]
        pif_closing_index = get_closing_brackets_index(input, pif_index+1)
        pelse_index = pif_closing_index + 1
        pelse_closing_index = get_closing_brackets_index(input, pelse_index+1)
       
        pif_prob = input[pif_index][4:-2]
        pelse_prob = str(int(pif_prob.split('/')[1]) - int(pif_prob.split('/')[0])) + '/' + pif_prob.split('/')[1]
        
        C1 = input[pif_index+2: pif_closing_index]
        C2 = input[pelse_index+2: pelse_closing_index]
        before_pif = input[:pif_index]
        after_pelse = input[pelse_closing_index+1:]

        C1_branch_prob = multiply(current_branch_prob, pif_prob)
        C2_branch_prob = multiply(current_branch_prob, pelse_prob)

        first_branch = rename(before_pif + C1 + after_pelse, '0')
        second_branch = rename(before_pif + C2 + after_pelse, '1')

        # take vars before and after into two branches
        # it will look like this: pif(pif_prob){C1}pelse{C2} where C1 and C2 have all variables as prev_name + '0' and prev_name + '1' respectively
        # then get rid of pif and pelse
        if '_' not in asserted_var:
            asserted_var = asserted_var + '_'

        pif_input, dict_after_pif = convert( first_branch, C1_branch_prob, asserted_var + '0', current_dict)
        pelse_input, dict_after_pelse = convert( second_branch, C2_branch_prob, asserted_var + '1', dict_after_pif)
     
        return pif_input + pelse_input, dict_after_pelse
    else:
        current_dict[asserted_var] = current_branch_prob
        return input, current_dict

filename = sys.argv[1]
    
with open(filename, 'r', encoding='utf-8') as my_file:
    raw_input = my_file.readlines()

input = preprocess(raw_input)

beginning, input, ending = strip(input) 

asserted_var, asserted_value = process_assertion(ending)

transformed_input, dict = convert(input, '1/1', asserted_var_name(asserted_var), { })

coefficients, multiple = process_dict(dict)

rewritten_assertion = rewrite_assertion(asserted_var, asserted_value, coefficients, multiple)

rewritten_ending = rewrite_ending(ending, rewritten_assertion)

non_probabilistic_program = prefix + beginning + transformed_input + rewritten_ending

output_file = filename[:-2] + '_output.c'
with open(output_file, 'w') as o:
    o.writelines(non_probabilistic_program)

f = open(output_file, "r")

#subprocess.run(['./vajra', output_file])