extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int(void);
int N;
int main()
{
N = __VERIFIER_nondet_int();
if(N <= 0) return 1;
int i;
int a_0[N];
int sum_0[1];
sum_0[0] = 0;
for(i=0; i<N; i++)
{
a_0[i] = 1;
}
for(i=0; i<N; i++)
{
sum_0[0] = sum_0[0] + a_0[i];
}
for(i=0; i<N; i++)
{
if(sum_0[0] == N)
{
a_0[i] = a_0[i] - 1;
}
else
{
a_0[i] = a_0[i] + 1;
}
}
int a_1[N];
int b_1[N];
b_1[0] = 8;
a_1[0] = 1;
for(i=1; i<N; i++)
{
b_1[i] = b_1[i-1] + 8;
}
for(i=1; i<N; i++)
{
a_1[i] = a_1[i-1] + b_1[i-1];
}
for(i=0; i<N; i++)
{
__VERIFIER_assert(4 * a_0[i] == 4*i*i+4*i+1 - a_1[i]);
}
return 1;
}
