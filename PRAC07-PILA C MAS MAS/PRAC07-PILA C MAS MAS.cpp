// PRAC07-PILA C MAS MAS.cpp 
 
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	const int capacidad = 10;
	vector<int>elementos(capacidad);
	int cima = -1;
	cout << "tecla elementos de la pila (termina con -1)\n";
	int x = 0;
	const int CLAVE = -1;
	while (x != CLAVE)
	{
		string entrada;
		cin >> entrada;


		try {
			x = stoi(entrada);
			if (cima < capacidad - 1) {
				cima++;
				elementos[cima] = x;

			}
			else {
				cout << "pila llena\n";
				break;
			}
		}
		catch (const invalid_argument&) {
			cout << "entrada no valida\n";
		}
		if (cima >= 0) {
			cout << "elementos de la pila\n";
			while (cima >= 0) {
				x = elementos[cima];
				cima--;
				cout << x << "";
			}
		}
		else {
			cout << "pila vacia\n";
		}
		return 0;
	}
}