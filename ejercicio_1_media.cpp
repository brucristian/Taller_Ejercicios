/*
Joan Sebastian Vergara Valencia Codigo: 6902510055;
Josue Villasmil Codigo: 6902510017
Cristian Bru Codigo: 6902510029
Armando Escobar Codigo: 6902510023
*/

/*
Diseñar una funcion que calcule la media de tres numeros leidos del teclado y 
poner un ejemplo de su aplicacion
*/

#include<iostream>

 using namespace std;

 float notas(float nota_1, float nota_2, float nota_3){
    
    return (nota_1 + nota_2 + nota_3)/3;


 }
 int main(){

    cout << "El siguiente estudiante quiere saber su calificacion final del curso de programacion, teniendo en cuenta que cada una de las 3 nota vale el mismo porcentaje " << endl;

    float nota[3];

    system("pause");
    system("cls");

    for(int i=0;i<3;i++){


        do{
        cout << "Ingrese la nota #" << i+1 << ": ";
        cin >> nota[i];
        cout << endl;

        system("cls");

        if(nota[i]<0){
            cout << "ERROR!!! No se pueden ingresar numeros negativos. Intente nuevamente " << endl;
        }

        }while(nota[i]<0);

    } 

    cout << "Su nota definitiva es: " << notas(nota[0], nota[1], nota[2]) << endl;

    return 0;
 }
