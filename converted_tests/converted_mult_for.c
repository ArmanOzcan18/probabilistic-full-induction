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
int f_0[1];
f_0[0] = 0;
for(i=0; i<N; i++)
{
f_0[0] = 2* f_0[0];
}
int f_1[1];
f_1[0] = 0;
for(i=0; i<N; i++)
{
f_1[0] = f_1[0] + 2;
}
__VERIFIER_assert(f_0[0] == 2 * (2*N-1) - f_1[0]);
return 1;
}
