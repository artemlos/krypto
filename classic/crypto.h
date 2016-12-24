#ifndef CRYPTO
#define CRYPTO

class Chars {
	public:
		static char getChar(int pos) {
			
			return (char)(0x40+pos);
		}		
};

// O(n^2)
int* key_stream(int* init, int* c, int m, int size) {
	
	int* stream = new int[size];
	
	// use the init vector first
	for(int i = 0; i < m; ++i) {
		stream[i]=init[i];
	}

	for(int i = 0; i < size; ++i) {

		int result = 0;
		for(int j = 0; j < m; ++j) {
			if(c[j]) {
				result = (result ^ stream[i+j]) ;
			}
		}
		stream[i+4]=result;
	}


	return stream;

}


#endif
