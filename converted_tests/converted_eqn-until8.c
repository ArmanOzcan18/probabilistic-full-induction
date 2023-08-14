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
int a_000[N];
int b_000[N];
b_000[0] = 1;
a_000[0] = 8;
for(i=1; i<N; i++)
{
a_000[i] = a_000[i-1] + 8;
}
for(i=1; i<N; i++)
{
b_000[i] = b_000[i-1] + a_000[i-1];
}
int a_001[N];
int b_001[N];
b_001[0] = 1;
a_001[0] = 10;
for(i=1; i<N; i++)
{
a_001[i] = a_001[i-1] + 10;
}
for(i=1; i<N; i++)
{
b_001[i] = b_001[i-1] + a_001[i-1];
}
int a_010[N];
int b_010[N];
b_010[0] = 1;
a_010[0] = 2;
for(i=1; i<N; i++)
{
a_010[i] = a_010[i-1] + 2;
}
for(i=1; i<N; i++)
{
b_010[i] = b_010[i-1] + a_010[i-1];
}
int a_011[N];
int b_011[N];
b_011[0] = 1;
a_011[0] = 4;
for(i=1; i<N; i++)
{
a_011[i] = a_011[i-1] + 4;
}
for(i=1; i<N; i++)
{
b_011[i] = b_011[i-1] + a_011[i-1];
}
int a_100[N];
int b_100[N];
b_100[0] = 1;
a_100[0] = 6;
for(i=1; i<N; i++)
{
a_100[i] = a_100[i-1] + 6;
}
for(i=1; i<N; i++)
{
b_100[i] = b_100[i-1] + a_100[i-1];
}
int a_101[N];
int b_101[N];
b_101[0] = 1;
a_101[0] = 12;
for(i=1; i<N; i++)
{
a_101[i] = a_101[i-1] + 12;
}
for(i=1; i<N; i++)
{
b_101[i] = b_101[i-1] + a_101[i-1];
}
int a_110[N];
int b_110[N];
b_110[0] = 1;
a_110[0] = 14;
for(i=1; i<N; i++)
{
a_110[i] = a_110[i-1] + 14;
}
for(i=1; i<N; i++)
{
b_110[i] = b_110[i-1] + a_110[i-1];
}
int a_111[N];
int b_111[N];
b_111[0] = 1;
a_111[0] = 16;
for(i=1; i<N; i++)
{
a_111[i] = a_111[i-1] + 16;
}
for(i=1; i<N; i++)
{
b_111[i] = b_111[i-1] + a_111[i-1];
}
for(i=0; i<N; i++)
{
__VERIFIER_assert(b_000[i] == 36*i*i+36*i+8 - b_001[i] - b_010[i] - b_011[i] - b_100[i] - b_101[i] - b_110[i] - b_111[i]);
}
return 1;
}
