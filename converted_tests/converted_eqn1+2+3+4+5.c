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
int b_00[N];
b_00[0] = 1;
a_00[0] = 2;
for(i=1; i<N; i++)
{
a_00[i] = a_00[i-1] + 2;
}
for(i=1; i<N; i++)
{
b_00[i] = b_00[i-1] + a_00[i-1];
}
int a_01[N];
int b_01[N];
b_01[0] = 1;
a_01[0] = 4;
for(i=1; i<N; i++)
{
a_01[i] = a_01[i-1] + 4;
}
for(i=1; i<N; i++)
{
b_01[i] = b_01[i-1] + a_01[i-1];
}
int a_10[N];
int b_10[N];
b_10[0] = 1;
a_10[0] = 6;
for(i=1; i<N; i++)
{
a_10[i] = a_10[i-1] + 6;
}
for(i=1; i<N; i++)
{
b_10[i] = b_10[i-1] + a_10[i-1];
}
int a_110[N];
int b_110[N];
b_110[0] = 1;
a_110[0] = 8;
for(i=1; i<N; i++)
{
a_110[i] = a_110[i-1] + 8;
}
for(i=1; i<N; i++)
{
b_110[i] = b_110[i-1] + a_110[i-1];
}
int a_111[N];
int b_111[N];
b_111[0] = 1;
a_111[0] = 10;
for(i=1; i<N; i++)
{
a_111[i] = a_111[i-1] + 10;
}
for(i=1; i<N; i++)
{
b_111[i] = b_111[i-1] + a_111[i-1];
}
for(i=0; i<N; i++)
{
__VERIFIER_assert(2 * b_00[i] == 21*i*i+21*i+8 - 2 * b_01[i] - 2 * b_10[i] - b_110[i] - b_111[i]);
}
return 1;
}
