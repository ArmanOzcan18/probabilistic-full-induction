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
int f[1];
f[0] = 0;
int x;
for(i=0; i<N; i++)
{
x = 0;
f[0] = f[0] + x;
}
__VERIFIER_assert(3 * f[0] == 2*N);
return 1;
}
