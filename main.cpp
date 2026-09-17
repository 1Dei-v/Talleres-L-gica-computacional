#include <iostream>
#include <iomanip> // da valor numerico (no notacion cientifica)
using namespace std;
int main()
    {
    //T0 ejercicio 1
    //Variables de entrada
    float capital, tiempo, intereses;
    //Variables de salida
    float ganancia;
    //Condiciones
    cout<<"Ingresa el valor del capital: ";
    cin>>capital;
    cout<<"Ingresa tasa de interes: ";
    cin>>intereses;
    cout<<"Ingresa el tiempo en meses: ";
     cin>>tiempo;
    ganancia = capital * intereses/100 * tiempo;
    cout << fixed << setprecision(0); // (no notacion cientifica) decimal normal
    cout<<"La ganancia obtenida fue: "<<ganancia<< " pesos en "<<tiempo<<" meses";
    }

