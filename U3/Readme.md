# EXCERSISE 1
### This code show the exchange of money into bills and coins

```c++
//Libraries
#include <iostream>
using namespace std;
//Variable initialization
int quinientos = 0, doscientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;
int residuo;


void obtenermoneda(int);
void obtenercambio(int);
void imprimircambio();
//Main function
int main()
{
    int dinero;
    cout << "Amount of money\n"<< "$";
    cin >> dinero;

    obtenercambio(dinero); 
    imprimircambio();


    return 0;
}
//Calculate coins
void obtenermoneda(int dinero)
{
    diez = residuo / 10;
    residuo = residuo % 10;
    cinco = residuo / 5;
    residuo = residuo % 5;
    dos = residuo / 2;
    residuo = residuo % 2;
    uno = residuo / 1;
    residuo = residuo % 1;
}
//Calculate banknotes
void obtenercambio(int dinero)
{
    quinientos = dinero / 500;
    residuo = dinero % 500;
    doscientos = residuo / 200;
    residuo = residuo % 200;
    cien = residuo / 100;
    residuo = residuo % 100;
    cincuenta = residuo / 50;
    residuo = residuo % 50;
    veinte = residuo / 20;
    residuo = residuo % 20;

    obtenermoneda(residuo);
}
//Imprent of the change
void imprimircambio()
{
    cout << "Five hundred bills:\n"
         << quinientos << endl;
    cout << "Two hundred bills:\n"
         << doscientos << endl;
    cout << "One hundred bills:\n"
         << cien << endl;
    cout << "Fifty bills:\n"
         << cincuenta << endl;
    cout << "Twenty bills:\n"
         << veinte << endl;
    cout << "Ten coins:\n"
         << diez << endl;
    cout << "Five coins:\n"
         << cinco << endl;
    cout << "Two coins:\n"
         << dos << endl;
    cout << "One coins:\n"
         << uno << endl;
}
```
## CODE TEST
###The user ingresed the mount of 2978

<img src="./IMAGENES/3.1.png">
