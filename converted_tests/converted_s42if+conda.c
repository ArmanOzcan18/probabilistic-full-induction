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
int sum_0[1];
int a_0[N];
sum_0[0] = 0;
for(i=0; i<N; i++)
{
a_0[i] = 1;
}
for(i=0; i<N; i++)
{
if(a_0[i] == 1)
{
a_0[i] = a_0[i] + 4;
}
else
{
a_0[i] = a_0[i] - 1;
}
}
for(i=0; i<N; i++)
{
if(a_0[i] == 5)
{
sum_0[0] = sum_0[0] + a_0[i];
}
else
{
sum_0[0] = sum_0[0] * a_0[i];
}
}
int sum_1[1];
int a_1[N];
sum_1[0] = 0;
for(i=0; i<N; i++)
{
a_1[i] = 1;
}
for(i=0; i<N; i++)
{
if(a_1[i] == 1)
{
a_1[i] = a_1[i] + 1;
}
else
{
a_1[i] = a_1[i] - 1;
}
}
for(i=0; i<N; i++)
{
sum_1[0] = sum_1[0] + a_1[i];
}
__VERIFIER_assert(sum_0[0] == 7*N - sum_1[0]);
return 1;
}
