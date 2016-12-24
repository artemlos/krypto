#include <iostream>
#include "crypto.h"
using namespace std;

int main()
{
	//cout <<	Chars::getChar(1);

	int init[] = {1,0,0,0};
	int c[] = {1,1,0,0};

	int* stream = key_stream(init, c, 4, 10);

	
	for(int i = 0; i < 10; i++) {
		cout << stream[i];
	}

	delete []stream;
	return 0;
}
