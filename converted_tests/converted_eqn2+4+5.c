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
int b_0[N];
b_0[0] = 1;
a_0[0] = 8;
for(i=1; i<N; i++)
{
a_0[i] = a_0[i-1] + 8;
}
for(i=1; i<N; i++)
{
b_0[i] = b_0[i-1] + a_0[i-1];
}
int a_10[N];
int b_10[N];
b_10[0] = 1;
a_10[0] = 4;
for(i=1; i<N; i++)
{
a_10[i] = a_10[i-1] + 4;
}
for(i=1; i<N; i++)
{
b_10[i] = b_10[i-1] + a_10[i-1];
}
int a_11[N];
int b_11[N];
b_11[0] = 1;
a_11[0] = 10;
for(i=1; i<N; i++)
{
a_11[i] = a_11[i-1] + 10;
}
for(i=1; i<N; i++)
{
b_11[i] = b_11[i-1] + a_11[i-1];
}
for(i=0; i<N; i++)
{
__VERIFIER_assert(3 * b_0[i] == 24*i*i+24*i+6 - b_10[i] - 2 * b_11[i]);
}
return 1;
}
