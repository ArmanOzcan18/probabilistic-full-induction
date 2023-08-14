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
for(i = 0; i < N; i++)
{
a_0[i] = __VERIFIER_nondet_int();
}
for(i = 0; i < N; i++)
{
sum_0[0] = sum_0[0] + a_0[i];
}
for(i = 0; i < N; i++)
{
sum_0[0] = sum_0[0] - a_0[i];
}
int a_1[N];
int sum_1[1];
sum_1[0] = 0;
for(i = 0; i < N; i++)
{
a_1[i] = __VERIFIER_nondet_int();
}
for(i = 0; i < N; i++)
{
sum_1[0] = sum_1[0] + a_1[i];
}
for(i = 0; i < N; i++)
{
sum_1[0] = sum_1[0] - a_1[i];
}
for(i = 0; i < N; i++)
{
sum_1[0] = sum_1[0] + a_1[i];
}
for(i = 0; i < N; i++)
{
sum_1[0] = sum_1[0] - a_1[i];
}
__VERIFIER_assert(sum_0[0] == 2 * (0) - sum_1[0]);
return 1;
}
