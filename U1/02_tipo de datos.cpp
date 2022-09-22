/* Unidad 1. Tipos de datos 
AUtor: Adriana Marlene SIlva López
Fecha:19/09/22
Descripción: Muestra los diferentes tipos de datos en c++
*/

// Libreria para manejo de entradas y salida de pantalla
#include <iostream>
//Libreria para el uso de printf y scanf
#include <stdio.h>
//uso del namespace para evitar el std::
using namespace std;
//Función principal de tipo entero
int main()
{
    int entero = 4;
    float flotante = 2.565465654654;
    double grande = 2.56545654654;
    char caracter = 64;

    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof (entero) << " bytes" << endl;
    cout << "El numero flotante es: " << flotante << endl;
    cout << "El tamaño del numero flotante es: " << sizeof (flotante) << " bytes" << endl;
    cout << "El numero grande es: " << grande << endl;
    cout << "El tamaño del numero grande es: " << sizeof (grande) << " bytes" << endl;
    cout << "El numero de caracter es: " << caracter << endl;
    cout << "El tamño del caracter es " << sizeof (caracter) << " bytes" << endl;

    cout << "================================" <<endl;

    printf ("Usando la función printf\n");
    printf ("EL numero entero es: %i \n", entero);
    printf ("El numero flotante es: %3.1f \n", flotante);

    // Al ser una función debe retornar un valor en este caso 0
    return 0;
}

