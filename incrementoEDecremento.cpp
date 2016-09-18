#include <iostream>

using namespace std;

int main() {


	//Incremento = ++
	//Decremento = --
	//pré incremento = ++x
	//pós incremento = x++
	cout << "Operador de Incremento" << endl;

	int i = 0, i2 = 0;
	cout << "Pŕe " << ++i << endl;
	cout << "Pós " << i2++ << endl;
	cout << "Pós " << i2 << endl;

	cout << endl;

	cout << "Operador de Decremento" << endl;

	int j = 0, j2 = 0;

	cout << "Pre " << --j << endl;
	cout << "Pos " << j2-- << endl;
	cout << "Pos " << j2 << endl;


	return 0;
}