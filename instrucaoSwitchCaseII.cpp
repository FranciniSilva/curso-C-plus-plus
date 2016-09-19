#include <iostream>

using namespace std;

int main() {

	char c;
	cout << "Por favor, digite uma letra entre a até f" << endl;
	cin >> c;

	switch(c) {
		case 'a':
		case 'A':
			cout << "Você digitou a letra 'a' ou 'A' " << endl;
		break;

		case 'b':
		case 'B':
			cout << "Você digitou a letra 'a' ou 'B' " << endl;
		break;

		case 'c':
		case 'C':
		case 'd':
		case 'D':
		case 'e':
		case 'E':
			cout << "Você digitou a letra 'c' ou 'C', ou 'd' ou 'D', ou 'e' ou 'E' " << endl;
		break;

		case 'f':
		case 'F':
			cout << "Você digitou a letra 'f' ou 'F' " << endl;
		break;

		default:
			cout << "Você não digitou uma letra válida" << endl;




	}

	return 0;
}