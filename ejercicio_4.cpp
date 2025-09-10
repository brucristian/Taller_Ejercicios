// Joan Sebastian Vergara Valencia; Codigo: 6902510055

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
	cout << "Digite dos numeros enteros: "; cin >> x >> y;
	
	cout << "El numero mayor entre " << x << " y " << y << " es: " << numeroMayor(x, y);
	
}
