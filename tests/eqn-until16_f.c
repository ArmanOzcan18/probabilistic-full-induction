int N;
// 35 seconds
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
                pif(1/2){
                    a[0] = 8;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 8;
                    }
                }pelse{
                    a[0] = 18;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 18;
                    }
                }
            }pelse{
                pif(1/2){
                    a[0] = 20;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 20;
                    }
                }pelse{
                    a[0] = 10;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 10;
                    }
                }
            }
        }pelse{
            pif(1/2){
                pif(1/2){
                    a[0] = 2;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 2;
                    }
                }pelse{
                    a[0] = 24;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 24;
                    }
                }
            }pelse{
                pif(1/2){
                    a[0] = 22;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 22;
                    }
                }pelse{
                    a[0] = 4;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 4;
                    }
                }
            }
        }
    }pelse{
        pif(1/2){
            pif(1/2){
                pif(1/2){
                    a[0] = 6;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 6;
                    }
                }pelse{
                    a[0] = 26;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 26;
                    }
                }
            }pelse{
                pif(1/2){
                    a[0] = 28;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 28;
                    }
                }pelse{
                    a[0] = 12;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 12;
                    }
                }
            }
        }pelse{
            pif(1/2){
                pif(1/2){
                    a[0] = 14;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 14;
                    }
                }pelse{
                    a[0] = 32;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 32;
                    }
                }
            }pelse{
                pif(1/2){
                    a[0] = 30;
                    for(i=1; i<N; i++)
                    {
                    a[i] = a[i-1] + 30;
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
    }

	for(i=1; i<N; i++)
	{
		b[i] = b[i-1] + a[i-1];
	}

	for(i=0; i<N; i++)
	{
		assert(E(b[i]) == (137*i*i + 136*i + 16)/16 );
	}
	return 1;
}