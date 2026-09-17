#include <iostream>
#include <iomanip> //da formato numerico (no notacion cientifica)

using namespace std;

int main() {
    // Ejercicio 12
    // Variables de entrada
    float examen_mat, examen_fis, examen_quim, tarea1fis, tarea2fis, tarea1mat, tarea2mat, tarea3mat, tarea1quim, tarea2quim, tarea3quim;
    
    // Variables de salida
    float matematicas, fisica, quimica, promedio_general, promedio_general1, promedio_mat, promedio_fis, promedio_quim, promedio_mat1, promedio_fis1, promedio_quim1, porcentaje_examen_mat, porcentaje_examen_fis, porcentaje_examen_quim, porcentaje_nota_mat, porcentaje_nota_fis, porcentaje_nota_quim;
    
    // Condiciones
    cout << "A continuacion ingresar los valores de cada nota. ";
    
    cout << "Ingresa la calificacion del  examen de matematicas: ";
    cin >> examen_mat;
    cout << "Ingresa la calificacion de la primera tarea de matematicas: ";
    cin >> tarea1mat;
    cout << "Ingresa la calificacion de la segunda nota de matematicas: ";
    cin >> tarea2mat;
    cout << "Ingresa la calificacion de la tercera nota de matematicas: ";
    cin >> tarea3mat;
    
    cout << "Ingresa la calificacion del examen de fisica: ";
    cin >> examen_fis;
    cout << "Ingresa la calificacion de la primera nota de fisica: ";
    cin >> tarea1fis;
    cout << "Ingresa la calificacion de la segunda nota de fisica: ";
    cin >> tarea2fis;
    
    cout << "Ingresa la calificacion del examen de quimica: ";
    cin >> examen_quim;
    cout << "Ingresa la calificacion de la primera nota de quimica: ";
    cin >> tarea1quim;
    cout << "Ingresa la calificacion de la segunda nota de quimica: ";
    cin >> tarea2quim;
    cout << "Ingresa la calificacion de la tercera nota de quimica: ";
    cin >> tarea3quim;
    
    // Proceso
    promedio_mat1 = tarea1mat + tarea2mat + tarea3mat; 
    promedio_fis1 = tarea1fis + tarea2fis;
    promedio_quim1 = tarea1quim + tarea2quim + tarea3quim;
    
    promedio_mat = promedio_mat1 / 3;
    promedio_fis = promedio_fis1 / 2;
    promedio_quim = promedio_quim1 / 3; 
    
    porcentaje_examen_mat = examen_mat * 0.90;
    porcentaje_nota_mat = promedio_mat * 0.10;
    
    porcentaje_examen_fis = examen_fis * 0.80;
    porcentaje_nota_fis = promedio_fis * 0.20;
    
    porcentaje_examen_quim = examen_quim * 0.85;
    porcentaje_nota_quim = promedio_quim * 0.15;
    
    matematicas = porcentaje_examen_mat + porcentaje_nota_mat;
    fisica = porcentaje_examen_fis + porcentaje_nota_fis;
    quimica = porcentaje_examen_quim + porcentaje_nota_quim;
    
    promedio_general1 = matematicas + fisica + quimica;
    promedio_general = promedio_general1 / 3;
    
    cout << fixed << setprecision(2); // (no notacion cientifica) decimal normal
    
    // salida
    cout << "El promedio general es: " << promedio_general <<endl;
    cout << "La nota final de matematicas es: " << matematicas <<endl;
    cout << "La nota final de fisica es: " << fisica <<endl;
    cout << "La nota final de quimica es: " << quimica <<endl;
    
}