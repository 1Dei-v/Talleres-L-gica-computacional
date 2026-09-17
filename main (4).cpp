#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 4 
    // Variables de entrada 
    float hombres, mujeres;
    
    // Variables de salida
    float total, porcentaje_hombres1, porcentaje_mujeres1, porcentaje_hombres, porcentaje_mujeres; 
    
    // Condiciones
    cout << "Ingresa la cantidad de hombres: ";
    cin >> hombres; 
    
    cout << "Ingresa la cantidad de mujeres: ";
    cin >> mujeres;
    
    // Proceso
    total = hombres + mujeres;
    
    porcentaje_hombres1 = hombres / total;
    porcentaje_hombres = porcentaje_hombres1 * 100;
    
    porcentaje_mujeres1= mujeres / total;
    porcentaje_mujeres= porcentaje_mujeres1 * 100;
    
     cout << fixed << setprecision(0); // da formato numerico (no notacion cientifica)
    
    // salida
    cout << "Hay un total de " << total << " personas.";
    cout << " El " << porcentaje_hombres << "% son hombres, el" << porcentaje_mujeres << "% son mujeres";
    
}