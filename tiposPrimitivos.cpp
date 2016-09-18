#include <iostream>

using namespace std;

int main() {

	cout << "********************" << endl;
	cout << "* Tipos primitivos *" << endl;
	cout << "********************" << endl;
	cout << endl;
	int varInt = 100;
	char c = 'r';
	double pFlutuante= 5.99;

	cout << "O valor da variável varInt é: " << varInt << endl;
	cout << "O valor da variável c é: " << c << endl;
	cout << "O valor da variável pFlutuante é: " << pFlutuante << endl;
	cout << endl;
	cout << "Memória da variável varInt: " << sizeof(varInt) << " bytes" << endl;
	cout << "Memória da  variável c: " << sizeof(c) << " bytes" << endl;
	cout << "Memória da variável pFlutuante: " << sizeof(pFlutuante) << " bytes" << endl; 

	return 0;
}