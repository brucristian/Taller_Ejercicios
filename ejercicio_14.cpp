/*
Joan Sebastian Vergara Valencia Codigo: 6902510055;
Josue Villasmil Codigo: 6902510017
Cristian Bru Codigo: 6902510029
Armando Escobar Codigo: 6902510023
*/

#include <iostream>
#include <cmath>
using namespace std; 

	void fac_pot (int num, int x) {
		int fac = 1, pot; 
		
		for (int i = 1; i <= num; i++){
			fac *= i; 
		}
		
		pot = pow (num, x);
		
		cout << "El factorial de " << num << " es: " << fac; 
		cout << "\nel " << num << " ^" << x << " = " << pot;  
	}
	int main () {
		int num, x;
		
		cout << "Digite un numero: "; cin >> num; 
		cout << "¿A que numero quiere elevar al numero anterior? "; cin >> x; 
		
		fac_pot(num, x);
	}
	
