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
int f[N];
for(i=0; i<N; i++)
{
f[i] = 4;
}
for(i=0; i<N; i++)
{
__VERIFIER_assert(f[i] == 4);
}
return 1;
}
