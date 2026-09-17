#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 4 
    // Variables de entrada
    float P1, P2, P3, examen_final, trabajo_final;
    
    // Variables de salida
    float nota_final, promedio_parcial, promedio, notas_parciales, nota_examen, nota_trabajo;
    
    // Condiciones
    cout << "Ingresa la calificacion parcial 1: ";
    cin >> P1;
    
    cout << "Ingresa la calificacion parcial 2: ";
    cin >> P2;
    
    cout << "Ingresa la calificacion parcial 3: ";
    cin >> P3;
    
    cout << "Ingresa la calificacion del examen final: ";
    cin >> examen_final;
    
    cout << "Ingresa la calificacion del trabajo final: ";
    cin >> trabajo_final;
    
    // Proceso
    promedio_parcial = P1 + P2 + P3;
    promedio = promedio_parcial / 3;
    
    notas_parciales = promedio * 0.55;
    nota_examen = examen_final * 0.30;
    nota_trabajo = trabajo_final * 0.15;
    
    nota_final = notas_parciales + nota_examen + nota_trabajo;
    
    // Salida 
    cout << "La nota final de la materia es " << nota_final << endl;
    
}