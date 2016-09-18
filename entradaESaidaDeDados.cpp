#include <iostream>
#include <iomanip>// bliblioteca que formata o que será impresso no console

using namespace std;

int main() {

	//obj cin obj cout
	cout << "Estudando a entrada e saída de dados" << endl;
	cout << endl;
	cout << "Resultado da soma em hexadeximal = " << hex << 10 + 50 << endl;
	cout << setw(10) << 1 << endl;
	cout << setw(10) << 2 << endl;
	cout << setw(10) << 3 << endl;

	cout << setw(10) << 1;
	cout << setw(10) << 2;
	cout << setw(10) << 3 << endl;
	cout << endl;

	cout << 10 << endl;
	cout << endl;

	return 0;
}