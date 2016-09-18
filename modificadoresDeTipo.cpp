#include <iostream>

using namespace std;

int main() {

	int a = 0; // 4 ytes 
	short int b = 0; //2 bytes
	long int c = 0;// 8 bytes

	int a2 = 0;
	signed int b2 = -10;
	unsigned int c2 = 10;

	cout << sizeof(a) << " - " << a2 << endl;
	cout << sizeof(b) << " - " << b2 << endl;
	cout << sizeof(c) << " - " << c2 << endl;

	return 0;
}