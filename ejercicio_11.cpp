/*
Joan Sebastian Vergara Valencia Codigo: 6902510055;
Josue Villasmil Codigo: 6902510017
Cristian Bru Codigo: 6902510029
Armando Escobar Codigo: 6902510023
*/

#include <iostream>
using namespace std; 

	void division (int num, int div){
		int cont = 0; 
		
		while (num >= div){
			num -= div;
			cont++;
		}
		
		cout << "El coeficiente de la division es: " << cont 
		<< "\nel residuo de la division es: " << num; 
	}
	
	int main () {
		int num, div; 
		
		cout << "Ingrese el numero 1: "; cin >> num;
		cout << "Ingrese el numero 2: "; cin >> div; 
		
		division (num, div);
		
		return 0; 
	}
