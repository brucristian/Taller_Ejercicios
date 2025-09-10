#include <iostream>
using namespace std; 

	void division (int num, int div){
		int cont = 0; 
		
		while (num >= div){
			num -= div;
			cont++;
		}
		
		cout << "el coeficiente de la division es: " << cont 
		<< "\nel residuo de la division es: " << num; 
	}
	
	int main () {
		int num, div; 
		
		cout << "ingrese el numero 1: "; cin >> num;
		cout << "ingrese el numero 2: "; cin >> div; 
		
		division (num, div);
		
		return 0; 
	}
