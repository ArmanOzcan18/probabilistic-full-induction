int N;
    // asdasd 
int main()
{
	N = nondet_int();
	if(N <= 0) return 1;
    int i;
    int f[N];     
    
    for(i=0; i<N; i++)
    {
        f[i] = |1/2|·2 + |1/3|·6 + |1/6| ·6 ;
    }

	for(i=0; i<N; i++)
	{
		assert(E(f[i]) == 4);
	}
	return 1;
}


