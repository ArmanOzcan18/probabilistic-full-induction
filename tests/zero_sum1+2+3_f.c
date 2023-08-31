int N;

int main()
{
	N = nondet_int();
	if(N <= 0) return 1;

	int i;
	int a[N];
	int sum[1];
    sum[0] = 0;

    for(i = 0; i < N; i++) 
    {
        a[i] = nondet_int();
    }

    for(i = 0; i < N; i++)
    {
        sum[0] = sum[0] + a[i];
    }

    for(i = 0; i < N; i++)
    {
        sum[0] = sum[0] - a[i];
    }

    pif(1/2){
        //skip
    }pelse{
        for(i = 0; i < N; i++)
        {
            sum[0] = sum[0] + a[i];
        }

        for(i = 0; i < N; i++)
        {
            sum[0] = sum[0] - a[i];
        }
        pif(1/2){
            //skip
        }pelse{
            for(i = 0; i < N; i++)
            {
                sum[0] = sum[0] + a[i];
            }

            for(i = 0; i < N; i++)
            {
                sum[0] = sum[0] - a[i];
            }
        }
    }
    
    assert(E(sum[0]) == 1);

	return 1;
}