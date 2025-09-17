/*
Joan Sebastian Vergara Valencia Codigo: 6902510055;
Josue Villasmil Codigo: 6902510017
Cristian Bru Codigo: 6902510029
Armando Escobar Codigo: 6902510023
*/

#include<iostream>

using namespace std;

int numeroMayor(int x, int y) {
	if(x > y)
		return x;
	else
		return y;
}

int main() {
	int x, y;
	cout << "Digite dos numeros enteros " << endl; 
	cout << "Ingrese el primer numero: ";
	cin >> x;
	cout << "Ingrese el segundo numero: ";
	cin >> y;
	
	cout << "El numero mayor entre " << x << " y " << y << " es: " << numeroMayor(x, y);


	return 0;
}
