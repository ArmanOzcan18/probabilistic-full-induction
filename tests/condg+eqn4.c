int N;

int main()
{
	N = nondet_int();
	if(N <= 0) return 1;

	int i;
	int a[N];
    pif(4/5){
        int sum[1];
        sum[0] = 0;
        for(i=0; i<N; i++)
        {
            a[i] = 1;
        }

        for(i=0; i<N; i++)
        {
            sum[0] = sum[0] + a[i];
        }

        for(i=0; i<N; i++)
        {
            if(sum[0] == N) {
                a[i] = a[i] - 1;
            } else {
                a[i] = a[i] + 1;
            }
        }
    }pelse{
        int b[N];
        b[0] = 8;
        a[0] = 1;
        for(i=1; i<N; i++)
        {
            b[i] = b[i-1] + 8;
        }

        for(i=1; i<N; i++)
        {
            a[i] = a[i-1] + b[i-1];
        }
    }

	for(i=0; i<N; i++)
	{
		assert(E(a[i]) == (4*i*i + 4*i + 1)/5);
	}
	return 1;
}