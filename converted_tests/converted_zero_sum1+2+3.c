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
int a_10[N];
int sum_10[1];
sum_10[0] = 0;
for(i = 0; i < N; i++)
{
a_10[i] = __VERIFIER_nondet_int();
}
for(i = 0; i < N; i++)
{
sum_10[0] = sum_10[0] + a_10[i];
}
for(i = 0; i < N; i++)
{
sum_10[0] = sum_10[0] - a_10[i];
}
for(i = 0; i < N; i++)
{
sum_10[0] = sum_10[0] + a_10[i];
}
for(i = 0; i < N; i++)
{
sum_10[0] = sum_10[0] - a_10[i];
}
int a_11[N];
int sum_11[1];
sum_11[0] = 0;
for(i = 0; i < N; i++)
{
a_11[i] = __VERIFIER_nondet_int();
}
for(i = 0; i < N; i++)
{
sum_11[0] = sum_11[0] + a_11[i];
}
for(i = 0; i < N; i++)
{
sum_11[0] = sum_11[0] - a_11[i];
}
for(i = 0; i < N; i++)
{
sum_11[0] = sum_11[0] + a_11[i];
}
for(i = 0; i < N; i++)
{
sum_11[0] = sum_11[0] - a_11[i];
}
for(i = 0; i < N; i++)
{
sum_11[0] = sum_11[0] + a_11[i];
}
for(i = 0; i < N; i++)
{
sum_11[0] = sum_11[0] - a_11[i];
}
__VERIFIER_assert(2 * sum_0[0] == 4 * (0) - sum_10[0] - sum_11[0]);
return 1;
}
