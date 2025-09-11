/*
Joan Sebastian Vergara Valencia Codigo: 6902510055;
Josue Villasmil Codigo: 6902510017
Cristian Bru Codigo: 6902510029
Armando Escobar Codigo: 6902510023
*/

#include <iostream>
#include <string>
using namespace std;

int salario(int horas_trabajadas, int valor_hora) {

   if (horas_trabajadas <= 40) {
        return horas_trabajadas * valor_hora;
    } else {
        int horas_normales = 40 * valor_hora;
        int horas_extra = (horas_trabajadas - 40) * (valor_hora * 1.5);
        return horas_normales + horas_extra;
    }
}

int main() {
    int horas_trabajadas, valor_hora;
    string nombre;
   
	

    do{
    cout << "=========================================\n";
    cout << "   CALCULO DE SALARIO DEL TRABAJADOR     \n";
    cout << "=========================================\n\n";

    cout << "Ingrese el nombre del trabajador: ";
    getline(cin,nombre);
    
    cout << "Ingrese el numero de horas trabajadas: ";
    cin >> horas_trabajadas;

    cout << "Ingrese el valor de la hora laboral: ";
    cin >> valor_hora;
   
    system("PAUSE");
    system("cls");
    
     if(horas_trabajadas <= 0 || valor_hora <= 0){
     	cout<<"ERROR!! el numero tiene que ser positivo.."<<endl;
	 }
    
} while(horas_trabajadas <= 0 || valor_hora <= 0);


    int salario_final = salario(horas_trabajadas, valor_hora);

    cout << "\n-----------------------------------------\n";
    cout << "   Resumen de liquidacion\n";
    cout << "-----------------------------------------\n";
    cout << "Trabajador: " << nombre << endl;
     cout << "Horas trabajadas: " << horas_trabajadas << endl;
    cout << "Valor por hora: $" << valor_hora << endl;
    cout << "Salario total: $" << salario_final << endl;
    cout << "-----------------------------------------\n";

    return 0;
}

