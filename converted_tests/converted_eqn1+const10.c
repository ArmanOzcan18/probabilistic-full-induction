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
int f_0[N];
for(i=0; i<N; i++)
{
f_0[i] = 10;
}
int f_1[N];
int a_1[N];
a_1[0] = 2;
f_1[0] = 1;
for(i=1; i<N; i++)
{
a_1[i] = a_1[i-1] + 2;
}
for(i=1; i<N; i++)
{
f_1[i] = f_1[i-1] + a_1[i-1];
}
for(i=0; i<N; i++)
{
__VERIFIER_assert(f_0[i] == 7*i*i+7*i+17 - 7 * f_1[i]);
}
return 1;
}
