int N;
    // less than a second
int main()
{
	N = nondet_int();
	if(N <= 0) return 1;
    int i;
    int f[1];
    f[0] = 0;
	int a;
    for(i=0; i<N; i++)
    {   
		pif(1/2){
			a = |1/2|·2 + |1/2|·4 ;
			pif(1/2){
				f[0] = f[0] - a/3;
			}pelse{
				f[0] = f[0] - a;
			}
		}pelse{
			f[0] = f[0] + 7;
		}
    } 
    assert(E(f[0]) == (5 * N)/2);

	return 1;
}


