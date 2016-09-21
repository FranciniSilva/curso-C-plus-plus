#include <iostream>

using namespace std;

struct Janela{
	string titulo;
	int left;
	int top;
};

int main(){

	Janela j1;
	j1.titulo = "Windows";
	j1.left = 0;
	j1.top = 0;

	Janela j2;
	j2.titulo = "Linux";
	j2.left = 0;
	j2.top = 0;

	cout << "O titulo é: " + j2.titulo << endl
	     << "left: " << j2.left << endl
	     << "top: " << j2.top << endl;

	cout << endl;

	cout << "O titulo é: " + j1.titulo << endl
	     << "left: " << j1.left << endl
	     << "top: " << j1.top << endl;

	return 0;
}