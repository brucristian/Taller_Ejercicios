/*
Joan Sebastian Vergara Valencia Codigo: 6902510055;
Josue Villasmil Codigo: 6902510017
Cristian Bru Codigo: 6902510029
Armando Escobar Codigo: 6902510023
*/

#include<iostream>
#include<sstream>

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
 
 string conversor(int x) {
 	stringstream ss;
 	ss << x;
 	return ss.str();
 }
 
 /*
 * Función: fecha
 * ----------------
 * Devuelve una fecha en formato "dd/mm/aa".
 *
 * Parámetros:
 *   x : entero que representa el día.
 *   y : entero que representa el mes.
 *   z : entero que representa el año (puede ser completo o solo 2 dígitos).
 *
 * Retorna:
 *   string con la fecha en formato "dd/mm/aa".
 */
string fecha(int x, int y, char z, char w) {
    stringstream ss;
    ss << x << "/" << y << "/" << z << w;
    return ss.str();
}

int main() {
    int dia, mes, anio;

    // Entrada de datos por parte del usuario
    cout << "Digite el dia: "; cin >> dia;
    cout << "Digite el mes: "; cin >> mes;
    cout << "Digite el anio: "; cin >> anio;

    // Validar la fecha y mostrar resultado
    if (validDate(dia, mes, anio)) {
    	// Convierto el año en string para usar solo los ultimos dos caracteres
        string x = conversor(anio);
        
        cout << endl << "La fecha es: " << fecha(dia, mes, x[x.length() - 2], x[x.length() - 1]);
    } else {
        cout << "\nFecha no valida!";
    }

    return 0;
}
