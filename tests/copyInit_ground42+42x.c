int N;

int main ( ) {
	N = nondet_int();
	int i;
	
	int a [N];
	int b [N]; 
    for ( i = 0 ; i < N ; i++ ) {
		a[i] = 42;
	}

	for ( i = 0 ; i < N ; i++ ) {
		b[i] = a[i];
	}

    pif(1/3){
        //skip
    }pelse{
        for( i = 0 ; i < N ; i++ ) {
            b[i] = b[i] + i;
        }
    }

	for ( i = 0 ; i < N ; i++ ) {
		assert(  E(b[i]) == (126 + 2*i)/3  );
	}
	return 0;
}
