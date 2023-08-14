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
        pif(1/2){
            pif(1/2){
                a[0] = 8;
                for(i=1; i<N; i++)
                {
                a[i] = a[i-1] + 8;
                }
            }pelse{
                a[0] = 10;
                for(i=1; i<N; i++)
                {
                a[i] = a[i-1] + 10;
                }
            }
        }pelse{
            pif(1/2){
                a[0] = 2;
                for(i=1; i<N; i++)
                {
                a[i] = a[i-1] + 2;
                }
            }pelse{
                a[0] = 4;
                for(i=1; i<N; i++)
                {
                a[i] = a[i-1] + 4;
                }
            }
        }
    }pelse{
        pif(1/2){
            pif(1/2){
                a[0] = 6;
                for(i=1; i<N; i++)
                {
                a[i] = a[i-1] + 6;
                }
            }pelse{
                a[0] = 12;
                for(i=1; i<N; i++)
                {
                a[i] = a[i-1] + 12;
                }
            }
        }pelse{
            pif(1/2){
                a[0] = 14;
                for(i=1; i<N; i++)
                {
                a[i] = a[i-1] + 14;
                }
            }pelse{
                a[0] = 16;
                for(i=1; i<N; i++)
                {
                a[i] = a[i-1] + 16;
                }
            }
        }
    }

	for(i=1; i<N; i++)
	{
		b[i] = b[i-1] + a[i-1];
	}

	for(i=0; i<N; i++)
        {
                b[i] = b[i] + 10;
        }

	for(i=0; i<N; i++)
	{
		assert(E(b[i]) == (9*i*i + 9*i + 22)/2 );
	}
	return 1;
}
