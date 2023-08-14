int N;

int main()
{
	N = nondet_int();
	if(N <= 0) return 1;

	int i;
	int a[N];
	int b[N];

	
	b[0] = 1;
    pif(1/2){
        a[0] = 8;
        for(i=1; i<N; i++)
	    {
		a[i] = a[i-1] + 8;
	    }
    }pelse{
        pif(1/3){
            a[0] = 4;
            for(i=1; i<N; i++)
	        {
		    a[i] = a[i-1] + 4;
	        }
        }pelse{
            a[0] = 10;
            for(i=1; i<N; i++)
	        {
		    a[i] = a[i-1] + 10;
	        }
        }
    }

	for(i=1; i<N; i++)
	{
		b[i] = b[i-1] + a[i-1];
	}

	for(i=0; i<N; i++)
        {
                b[i] = b[i]+10;
        }

	for(i=0; i<N; i++)
	{
		assert(E(b[i]) == (24*i*i + 24*i + 66)/6 );
        //assert(E(b[i]) == 4*i*i + 4*i + 1;
	}
	return 1;
}
