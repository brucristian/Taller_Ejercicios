#include <iostream>

using namespace std;

	int mcd (int a, int b){
		int residuo;
		
		while (b != 0){
			
			residuo = a % b;
			a = b;
			b = residuo;				
		}
			
		return a;		
	}
	
	int main () {
		int num [4];
		
		for (int i = 1; i <= 4; i++){
			cout << "Ingrese el numero " << i << ": "; cin >> num[i];
		}
		
		cout << "El MCD de los 4 numeros ingresados es: " << mcd(mcd(mcd(num[0],num[1]),num[2]),num[3]);	
		
		return 0; 	
	}
