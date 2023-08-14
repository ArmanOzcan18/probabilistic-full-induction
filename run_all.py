import os
import os.path
import subprocess
from subprocess import Popen, PIPE
import json

# assign directory
directory = 'tests/'
 

total_count = len(next(os.walk(directory))[2])

# iterate over files in
# that directory
count = 0

dict = {}
for filename in os.listdir(directory):
    count += 1
    if (count ==2):
        break
    f = os.path.join(directory, filename)
    # checking if it is a file
    if os.path.isfile(f):
        output = ""
        with Popen(["python", "verify.py", f], stdout=PIPE) as p:
            while p.poll() is None:
                output += p.stdout.read1().decode("utf-8")
        dict[f] = output[:-1]
        print('Filename: ' + f)
        print('Result: ' + output[:-1])
        print("Test " + str(count) + "/" + str(total_count) + " complete." + "\n")

with open("results.json", "w") as outfile:
    json.dump(dict, outfile)
