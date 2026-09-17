#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 2
    // Variables de entrada
    float sueldo, ventas;
    
    // Variables de salida
    float comision, sueldo_total;

    // condiciones
    cout << "Ingresa el sueldo base: ";
    cin >> sueldo;

    cout << "Ingresa el total de ventas del mes: ";
    cin >> ventas;

    // Proceso
    comision = ventas * 0.10;
    sueldo_total = sueldo + comision;
    cout << fixed << setprecision(0); // da formato numerico (no notacion cientifica)
    
    // Salida
    cout << "Valor de la comision (10%): " << comision << " pesos" << endl;
    cout << "Sueldo total del mes: " << sueldo_total << " pesos" << endl;
}