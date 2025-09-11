/*
Joan Sebastian Vergara Valencia Codigo: 6902510055;
Josue Villasmil Codigo: 6902510017
Cristian Bru Codigo: 6902510029
Armando Escobar Codigo: 6902510023
*/
// Importacion de librerias
#include<iostream> // Para la iteraccion con el usuario (cout, cin)
#include<vector> // Para implementar una lista de valores
#include<map> // Para crear un diccionario
#include<sstream> // Para usar la funcion stringstream (Para combertir un string a un int)

// Espacio de trabajo
using namespace std;

/*
 * Función: bisiesto
 * ------------------
 * Determina si un año es bisiesto.
 *
 * Parámetros:
 *   x : entero que representa el año.
 *
 * Retorna:
 *   true si el año es bisiesto, false en caso contrario.
 */
bool bisiesto(int x) {
    return (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0);
}

/*
 * Función: validDate
 * ------------------
 * Verifica si una fecha (día, mes, año) es válida.
 *
 * Parámetros:
 *   x : entero que representa el día.
 *   y : entero que representa el mes.
 *   z : entero que representa el año.
 *
 * Retorna:
 *   true si la fecha es válida, false en caso contrario.
 */
bool validDate(int x, int y, int z) {
    if (z < 1) return false;           // No existen años 0 o negativos
    if (y < 1 || y > 12) return false; // Mes inválido (fuera de 1 a 12)

	int dias;
    switch (y) {
			
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: dias = 31; break; 
			
		case 4: case 6: case 9: case 11: dias = 30; break; 
		
		case 2 : dias = bisiesto(z) ? 29 : 28; break;
	}
	
	if(x >= 1 && x <= dias) {
		return true;
	}


    return false; // Si no se cumple, la fecha no es válida
}

int main() {
	// Variable para pedir la fecha
	string date;
	cout << "Digite la fecha en el formato (dd/mm/aa): "; cin >> date;
	
	// Variables para hacer la conversion de string a int
	int dia, mes, ano;
	
	// Variables para guardar los (/)
	char sep1, sep2;
	
	// Se cambian los tipos de datos
	stringstream ss(date);
	ss >> dia >> sep1 >> mes >> sep2 >> ano;
	
	// Se llama a la funion validDate y se imprime el mensaje correspondiente
	validDate(dia, mes, ano) ? cout << "La fecha es valida!" : cout << "La fecha no es valida!";
}
