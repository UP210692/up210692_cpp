#include <iostream>
using namespace std;
#include <stdio.h>
 
int main()
{
    int i;
    int numero;
    int lim;
 
    cout <<"Introduzca un numero entero:";
    cin >> %d & numero;
    cout << "Limite de la tabla";
    cin >> lim;
    printf("\n  La tabla de multiplicar del %d es:\n", numero);
    for ( i = 1 ; i <= lim ; i++ ) {
        printf("\n  %d * %d = %d", i, numero, i*numero);
    }
    return 0;
}

