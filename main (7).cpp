#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 8 
    // Variables de entrada
    float presupuesto;
    
    // Variables de salida
    float ginecologia, traumatologia, pediatria;
    
    // Condiciones
    cout << "Ingresa el valor del presupuesto anual: ";
    cin >> presupuesto;
    
    // Proceso
    ginecologia = presupuesto * 0.40;
    traumatologia = presupuesto * 0.30;
    pediatria = presupuesto * 0.30;
    
       cout << fixed << setprecision(0); // da formato numerico (no notacion cientifica)
       
    // salida
    cout << "El presupeusto anual se divide por cada area de la siguiente manera; ginecologia: " << ginecologia << " ; Traumatologia: " << traumatologia << " ; Pediatria: " << pediatria << endl;
    
}