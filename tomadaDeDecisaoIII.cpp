#include <iostream>

using namespace std;

int main() {

	double nota1, nota2, nota3, nota4;

	cout << "Digite a sua primeira nota do semestre: >>>";
	cin >> nota1;

	cout << "Digite a sua segunda nota do semestre: >>>";
	cin >> nota2;

	cout << "Digite a sua terceira nota do semestre: >>>";
	cin >> nota3;

	cout << "Digite a sua quarta nota do semestre: >>>";
	cin >> nota4;

	double soma = nota1 + nota2 + nota3 + nota4;
	soma = soma / 4;

	cout << "A média das notas do semestre é >>" << soma << endl;

	if (soma >= 6)
	{
		cout << "Aluno Aprovado" << endl;
	}else
		cout << "Aluno Reprovado" << endl;

	return 0;
}