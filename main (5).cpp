#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 6 
    // Variables de entrada
    float año_nacimiento, año_actual;
    string ya_cumplio;
    
    // Variables de salida
    float edad;
    
    // Condiciones
    cout << "Ingresa el año de nacimiento: ";
    cin >> año_nacimiento;
    
    cout << "Ingresa el año actual: ";
    cin >> año_actual;
    
    // Proceso
    edad = año_actual - año_nacimiento;
    
    cout << "¿ Ya cumpliste años este año ? (si / no): ";
    cin >> ya_cumplio;
    
    if (ya_cumplio == "no" || ya_cumplio == "NO" || ya_cumplio == "No") {
        edad = edad - 1;}
        
        // salida
        cout << "La edad es: " << edad << "años";
}