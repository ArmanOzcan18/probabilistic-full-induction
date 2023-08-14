int N;

int main ( ) {
	N = nondet_int();
	int incr[1];
    incr[0]= nondet_int();	
    int i;

	int a[N];
	int b[N];

	for ( i = 0 ; i < N ; i++ ) {
		a[i] = 42;
	}

	for ( i = 0 ; i < N ; i++ ) {
		b[i] = a[i];
	}

    pif(1/2){
        for ( i = 0 ; i < N ; i++ ) {
		    b[i] = b[i] + incr[0];
	    }
    }pelse{
        for ( i = 0 ; i < N ; i++ ) {
		    b[i] = b[i] + 2 * incr[0];
	    }
    }

	for ( i = 0 ; i < N ; i++ ) {
		assert(  E(b[i]) == (84 + 3 * incr[0])/2  );
	}
	return 0;
}
