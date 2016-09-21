#include <iostream>

using namespace std;

struct Pessoa{
	string nome;
	string sobrenome;
	int idade;
	string cpf;
};

int main(){

	Pessoa p1, p2;

	p1.nome = "Francini";
	p1.sobrenome = "Assis Silva";
	p1.idade = 26;
	p1.cpf = "123.456.789-09";


	p2.nome = "José";
	p2.sobrenome = "Maria";
	p2.idade = 30;
	p2.cpf = "123.456.789-09";



	return 0;
}