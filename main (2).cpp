#include <iostream>
#include <iomanip> // da valor numerico (no notacion cientifica)

using namespace std;
int main()
    {
        // Ejercicio 3 
        // Variables de entrada
        float valor_de_la_compra;
        
        // Variables de salida
        float valor_descuento, precio_final;
        
        // Condiciones
        cout << "Ingresa el valor de la compra:";
        cin >> valor_de_la_compra;
        
        // Proceso
        valor_descuento = valor_de_la_compra * 0.15;
        precio_final = valor_de_la_compra - valor_descuento;
        cout << fixed << setprecision(0); // (no notacion cientifica) decimal normal
        
        // Salida
        cout << "El descuento obtenido es: " << valor_descuento << "pesos" << endl;
        cout << "El precio final de la compra es: " << precio_final << "pesos" << endl;
        
    }