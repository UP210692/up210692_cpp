/* UNidad 2. Uso del if
Autor: Adriana Marlene Silva Lopez
Fecha: 22/09/22
Descripcion: Muestra el uso del if simple
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>
//Uso del namespace para evitar el std::
using namespace std;
//Funcion principal de tipo entero
int main()
{
    int numero;
    int dato = 1;

    cout << "Ingresa un numero entero";
    cin >> numero;
    if (numero == dato){

        cout << "El numero es igual a dato" << endl;
    }

//Ejercicio utilice las diferentes comparaciones ==, !=, <, >, <=, >=

return 0;

}