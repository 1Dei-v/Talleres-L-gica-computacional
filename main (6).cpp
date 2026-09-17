#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 7
    // Variables de entrada
    float pesos, valor_dolar;
    
    // Variables de salida
    float dolares;
    
    // Condiciones
    cout << "Ingresa la cantidad de pesos colombianos: ";
    cin >> pesos;
    
    cout << "Ingresa el valor actual de un dolar en pesos colombianos: ";
    cin >> valor_dolar;
    
    // Proceso
    dolares = pesos / valor_dolar;
       cout << fixed << setprecision(0); // da formato numerico (no notacion cientifica)
    
    // salida
    cout << "Tu cantidad de pesos colombianos equivale a : " << dolares << "dolares";
}