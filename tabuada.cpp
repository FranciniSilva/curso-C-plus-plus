#include <iostream>

using namespace std;

int main(){

	cout << "Por favor, coloque a tabuada que você deseja: " << endl;
	int n = 0;
	cin >> n;

	for (int i = 1; i <= 10; i++)
	{
		cout << i << " x "  << n << " = " << i * n << endl;
	}

	return 0;
}