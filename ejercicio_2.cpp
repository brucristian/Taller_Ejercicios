/*
Diseña la funcion factorial que calcule el factorial de un numero entero en 
el rango 100 a 1.000.000
*/

#include<iostream>
#include<string>

using namespace std;


long long factorial(int num){

    long long calculador=1;

    for(int i=1;i<=num;i++){

        calculador = calculador * i;

    }

    return calculador;
}

int main(){


    int num;

    do{
        cout << "Ingrese el numero del factorial a calcular entre 100 y 1.000.000: ";
        cin >> num;
    
        if (num>1000000 || num<100){

            system("clear");

            cout << "ERROR!!! El numero se encuentra por fuera del rango. Intente nuevamente" << endl;
            cout << endl;
        }
    }while(num>1000000 || num<100);


    cout << "El factorial del numero " << num << " es: " << factorial(num) << endl;

    return 0;
}
