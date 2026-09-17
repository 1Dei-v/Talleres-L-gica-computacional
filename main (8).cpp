#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    //Ejercicio 10 
    // Variables de entrada
    float precio;
    
    // Variables de salida
    float precio_final, ganancia;
    
    // Condiciones
    cout << "Ingresa el precio inicial del articulo: ";
    cin >> precio;
    
    // Proceso
    ganancia = precio * 0.30;
    precio_final = precio + ganancia;
    
    // salida
    cout << "El precio final de tu producto con ganancia es de: " << precio_final << "pesos"; 
}