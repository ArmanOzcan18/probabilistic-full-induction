int N;
// 1-2 seconds
int main()
{
	N = nondet_int();
	if(N <= 0) return 1;

	int i;
	int sum[1];
	int a[N];

	sum[0] = 0;
	for(i=0; i<N; i++)
	{
		a[i] = 1;
	}
	pif(1/2){
		for(i=0; i<N; i++)
		{
			if(a[i] == 1) {
				a[i] = a[i] + 4;
			} else {
				a[i] = a[i] - 1;
			}
		}

		for(i=0; i<N; i++)
		{
			if(a[i] == 5)
			{
				sum[0] = sum[0] + a[i];
			} else {
				sum[0] = sum[0] * a[i];
			}
		}
	}pelse{
		for(i=0; i<N; i++)
		{
			if(a[i] == 1) {
				a[i] = a[i] + 1;
			} else {
				a[i] = a[i] - 1;
			}
		}

		for(i=0; i<N; i++)
		{
			sum[0] = sum[0] + a[i];
		}
	}

	assert(E(sum[0]) == (7*N)/2);
	return 1;
}