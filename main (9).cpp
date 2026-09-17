#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 11
    // Variables de entrada
    float  inversion1, inversion2, inversion3;
    
    // Variables de salida
    float porcentaje1_, porcentaje2_, porcentaje3_, porcentaje1, porcentaje2, porcentaje3, total;
    
    // Condicionales
    cout << "Ingresa el valor que invirtio la primera persona: ";
    cin >> inversion1;
    
    cout << "Ingresa el valor que inviritio la segunda persona: ";
    cin >> inversion2;
    
    cout << "Ingresa el valor que invirtio la tercera persona: ";
    cin >> inversion3;
    
    // Proceso
    total = inversion1 + inversion2 + inversion3;
    
    porcentaje1_ = inversion1 / total; 
    porcentaje1 = porcentaje1_ * 100;
    
    porcentaje2_ = inversion2 / total;
    porcentaje2 = porcentaje2_ * 100;
    
    porcentaje3_ = inversion3 / total;
    porcentaje3 = porcentaje3_ * 100;
    
    // salida
    cout << "El porcentaje invertido por la primera persona es: " << porcentaje1 << "% , por la segunda persona es: " << porcentaje2_ << "% , y por la tercera persona es: " << porcentaje3_ << "%";

    
}