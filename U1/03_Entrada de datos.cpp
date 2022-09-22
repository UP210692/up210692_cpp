/* Unidad 1.Entrada de datos
Autor: Adriana Marlene Silva López
Fecha: 21/09/22
Descripción: MUestra la forma de ingresar tipo de datos por el usuario
*/


//Libreria para manejo de entradas y salidas de pantalla
#include <iostream>
//Libreria para el uso de printf y scanf
#include <stdio.h>
//Uso del namespace para evitar el std::
using namespace std;
//Funbcion principal de tipo entero
int main()
{
    int entero;
    int flotante;
    double grande;
    char caracter;

    cout << "Este por pograma muestra el ingreso de datos por el usuario. \n";
    cout << "Ingresa un dato de tipo entero: ";
    cin >> entero;
    cout << "El dato ingresado es: " << entero << endl;

    cout << "=====================" << endl;
    

    printf ("Usando la funcion printf y scanf\n");
    printf ("INgresa un dato de tipo entero: ");
    scanf ("%d",&entero);
    printf ("El dato ingresado es: %i \n", entero);

return 0;
}