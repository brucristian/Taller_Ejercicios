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
	
