/*
Joan Sebastian Vergara Valencia Codigo: 6902510055;
Josue Villasmil Codigo: 6902510017
Cristian Bru Codigo: 6902510029
Armando Escobar Codigo: 6902510023
*/

#include <iostream>
#include <cmath>
using namespace std;

double potencias(float x, int n) {
    return pow(x, n);
}

int main() {
    int n;
    float x;
    
    cout << "=====================================\n";
    cout << "   CALCULO DE POTENCIAS (x^n) \n";
    cout << "=====================================\n\n";

    cout << "Ingrese el valor de x: ";
    cin >> x;
    
    cout << "Ingrese el valor de n (entero): ";
    cin >> n;
    
    cout << "\n-------------------------------------\n";
    cout << "  El resultado de " << x << "^" << n 
         << " es: " << potencias(x, n) << endl;
    cout << "-------------------------------------\n";
    
    return 0;
}
