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
int f_00[1];
f_00[0] = 0;
for(i=0; i<N; i++)
{
f_00[0] = f_00[0] -1;
}
int f_01[1];
f_01[0] = 0;
for(i=0; i<N; i++)
{
f_01[0] = f_01[0] -3;
}
int f_1[1];
f_1[0] = 0;
for(i=0; i<N; i++)
{
f_1[0] = f_1[0] + 7;
}
__VERIFIER_assert(f_00[0] == 2 * (5*N) - f_01[0] - 2 * f_1[0]);
return 1;
}
