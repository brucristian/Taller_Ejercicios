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
 	
 	cout << "ingrese un numero: "; cin >> a;
 	cout << "el valor absoluto de " << a << " es: " << val_ab (a); 
 	
 	return 0;
 }
