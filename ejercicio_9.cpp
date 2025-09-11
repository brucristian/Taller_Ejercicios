

/*
Joan Sebastian Vergara Valencia Codigo: 6902510055;
Josue Villasmil Codigo: 6902510017
Cristian Bru Codigo: 6902510029
Armando Escobar Codigo: 6902510023
*//*
Escribe una funcion booleana digito que determine si un caracter es uno de 
los numeros del 0 al 9
*/

#include<iostream>

using namespace std;

bool digito(char caracter){

    if('0'<=caracter && caracter<='9'){
        return true;
    }else{
        return false;
    }
}

int main(){

    char caracter;

    cout << "Ingrese el caracter y se validara si es un numero entre 0 y 9: "; 
    cin >> caracter;
    cout << endl;

    if(digito(caracter)){
        cout << "TRUE, El caracter es un numero entre 0 y 9"  << endl;
    }else{
        cout << "FALSE, El caracter ingresado es distinto a un numero entre 0 y 9 " << endl;
    }

    return 0;
}
