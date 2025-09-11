/*
Joan Sebastian Vergara Valencia Codigo: 6902510055;
Josue Villasmil Codigo: 6902510017
Cristian Bru Codigo: 6902510029
Armando Escobar Codigo: 6902510023
*/

#include <iostream>
using namespace std;

 float val_ab (float a){
 	if (a < 0){
 		return a * (-1);
	}else {
		return a; 
	}
 }
 
 int main () {
 	float a; 
 	
 	cout << "Ingrese un numero: "; cin >> a;
 	cout << "El valor absoluto de " << a << " es: " << val_ab (a); 
 	
 	return 0;
 }
