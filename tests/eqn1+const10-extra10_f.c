int N;
    // asdasd 
int main()
{
	N = nondet_int();
	if(N <= 0) return 1;
    int i;

	int f[N];

    pif(1/8){
        for(i=0; i<N; i++)
	    {f[i] = 10;}
    }     pelse       {
        int a[N];
        a[0] = 2;
        f[0] = 1;
        for(i=1; i<N; i++)
        {
            a[i] = a[i-1] + 2;}

        for(i=1; i<N; i++){
            f[i] = f[i-1] + a[i-1];
       }
    }     
    
    for(i=0; i<N; i++)
    {
        f[i] = f[i] + 10;
    }

	for(i=0; i<N; i++)
	{
		assert(E(f[i]) == (7*i*i + 7*i + 96)/8 );
	}
	return 1;
}


