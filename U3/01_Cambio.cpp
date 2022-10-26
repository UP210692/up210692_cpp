/*
Autor: Adriana Marlene Silva Lopez
Fecha: 24/Octubre/2022
Description: Este programa muestra el cambio desglosado en billetes y monedas
*/

#include <iostream>
using namespace std;

int quinientos = 0, doscientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;
int residuo;


void obtenermoneda(int);
void obtenercambio(int);
void imprimircambio();

int main()
{
    int dinero;
    cout << "Cantidad de dinero \n"<< "$";
    cin >> dinero;

    obtenercambio(dinero); 
    imprimircambio();


    return 0;
}

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
void imprimircambio()
{
    cout << "Billetes de quinientos:\n"
         << quinientos << endl;
    cout << "Billetes de doscientos:\n"
         << doscientos << endl;
    cout << "Billetes de cien:\n"
         << cien << endl;
    cout << "Billetes de cincuenta:\n"
         << cincuenta << endl;
    cout << "Billetes de veinte:\n"
         << veinte << endl;
    cout << "Monedas de diez:\n"
         << diez << endl;
    cout << "Monedas de cinco:\n"
         << cinco << endl;
    cout << "Monedas de dos:\n"
         << dos << endl;
    cout << "Monedas de peso:\n"
         << uno << endl;
}