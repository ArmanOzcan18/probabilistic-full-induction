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
int a_00[N];
int sum_00[1];
sum_00[0] = 0;
for(i = 0; i < N; i++)
{
a_00[i] = __VERIFIER_nondet_int();
}
for(i = 0; i < N; i++)
{
sum_00[0] = sum_00[0] + a_00[i];
}
for(i = 0; i < N; i++)
{
sum_00[0] = sum_00[0] - a_00[i];
}
int a_01[N];
int sum_01[1];
sum_01[0] = 0;
for(i = 0; i < N; i++)
{
a_01[i] = __VERIFIER_nondet_int();
}
for(i = 0; i < N; i++)
{
sum_01[0] = sum_01[0] + a_01[i];
}
for(i = 0; i < N; i++)
{
sum_01[0] = sum_01[0] - a_01[i];
}
for(i = 0; i < N; i++)
{
sum_01[0] = sum_01[0] + a_01[i];
}
for(i = 0; i < N; i++)
{
sum_01[0] = sum_01[0] - a_01[i];
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
for(i = 0; i < N; i++)
{
sum_10[0] = sum_10[0] + a_10[i];
}
for(i = 0; i < N; i++)
{
sum_10[0] = sum_10[0] - a_10[i];
}
int a_110[N];
int sum_110[1];
sum_110[0] = 0;
for(i = 0; i < N; i++)
{
a_110[i] = __VERIFIER_nondet_int();
}
for(i = 0; i < N; i++)
{
sum_110[0] = sum_110[0] + a_110[i];
}
for(i = 0; i < N; i++)
{
sum_110[0] = sum_110[0] - a_110[i];
}
for(i = 0; i < N; i++)
{
sum_110[0] = sum_110[0] + a_110[i];
}
for(i = 0; i < N; i++)
{
sum_110[0] = sum_110[0] - a_110[i];
}
for(i = 0; i < N; i++)
{
sum_110[0] = sum_110[0] + a_110[i];
}
for(i = 0; i < N; i++)
{
sum_110[0] = sum_110[0] - a_110[i];
}
for(i = 0; i < N; i++)
{
sum_110[0] = sum_110[0] + a_110[i];
}
for(i = 0; i < N; i++)
{
sum_110[0] = sum_110[0] - a_110[i];
}
int a_111[N];
int sum_111[1];
sum_111[0] = 0;
for(i = 0; i < N; i++)
{
a_111[i] = __VERIFIER_nondet_int();
}
for(i = 0; i < N; i++)
{
sum_111[0] = sum_111[0] + a_111[i];
}
for(i = 0; i < N; i++)
{
sum_111[0] = sum_111[0] - a_111[i];
}
for(i = 0; i < N; i++)
{
sum_111[0] = sum_111[0] + a_111[i];
}
for(i = 0; i < N; i++)
{
sum_111[0] = sum_111[0] - a_111[i];
}
for(i = 0; i < N; i++)
{
sum_111[0] = sum_111[0] + a_111[i];
}
for(i = 0; i < N; i++)
{
sum_111[0] = sum_111[0] - a_111[i];
}
for(i = 0; i < N; i++)
{
sum_111[0] = sum_111[0] + a_111[i];
}
for(i = 0; i < N; i++)
{
sum_111[0] = sum_111[0] - a_111[i];
}
for(i = 0; i < N; i++)
{
sum_111[0] = sum_111[0] + a_111[i];
}
for(i = 0; i < N; i++)
{
sum_111[0] = sum_111[0] - a_111[i];
}
__VERIFIER_assert(2 * sum_00[0] == 8 * (0) - 2 * sum_01[0] - 2 * sum_10[0] - sum_110[0] - sum_111[0]);
return 1;
}
