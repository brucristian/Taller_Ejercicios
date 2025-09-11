/*
Joan Sebastian Vergara Valencia Codigo: 6902510055;
Josue Villasmil Codigo: 6902510017
Cristian Bru Codigo: 6902510029
Armando Escobar Codigo: 6902510023
*/

#include <iostream>
#include <string>
using namespace std; 

	void dec_rom (int num){
		
		int romanos [13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
		string romanos_x[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
		
	for (int i = 0; i < 13; i++){
			
			for (int j = 1; j <= num/romanos[i]; j++){
				cout << romanos_x[i];
			} 
			num %= romanos [i];
		}

	}
	
	int main () {
		int num = 1;
		
		do {
			if (num <= 0 || num > 3000){
				cout << "El numero ingresado debe ser un natural menor a 3000" << endl;
			}
			cout << "Ingrese un numero: "; cin >> num;
		}while (num <= 0 || num > 3000);
		
		dec_rom (num);
		
		return 0; 
	}
