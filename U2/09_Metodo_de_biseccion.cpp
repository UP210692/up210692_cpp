#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// Solve the equation
float resolverEcuacion(float numero)
{
    return (pow(numero, 2) - numero - 12);
}
int imprimirlinea()
{
    for (int i = 0; i < 161; i++)
    {
        cout << "-";
    }
    cout << "\n";
    return 0;
}
//Main function and declarate the variable
int main()
{
    int interador = 1;
    int solucion = 1;
    float margen_error = 0.00001;
    float a, b, c, ya, yb, yc;

    cout << "Value of A:\n ";
    cin >> a;
    cout << "Value of B:\n ";
    cin >> b;

    imprimirlinea();
    cout << "| Interdor \t| a \t\t\t| b \t\t\t| c \t\t\t| y(a)\t\t\t| y(b)\t\t\t| y(c)\t\t\t| \n";
    imprimirlinea();
// Cycle to obtain C ,Y(a), Y(b), Y(c)
    do
    {
        c = (a + b) / 2;
        ya = resolverEcuacion(a);
        yb = resolverEcuacion(b);
        yc = resolverEcuacion(c);
        // Print the results in a table
        cout << "| " << interador << "\t\t| " << fixed << setprecision(8) << a << "\t\t| " << b << "\t\t| " << c << "\t\t| " << ya << "\t\t| " << yb << "\t\t| " << yc << "\t\t| \n";
        imprimirlinea();
        if ((ya * yc) < 0)
        {
            b = c;
        }
        else {
            a=c;
        }
        if (a==b){
            solucion = 0;
            break;
        }
        interador++;
    } while ( abs(yc)>= margen_error);

    // Print the root 
    if (solucion != 0)
    {
        cout << "The root is:\n" << c<< endl;
    }
    else
    {
        cout << "There is no root in that range. \n";
    }
    return 0;
}