/*
Autor: Adriana Marlene Silva Lopez
Fecha: 27/Octubre/2022
Description: Este programa muestra el cambio desglosado en billetes y monedas con vectores
*/

#include <iostream>
using namespace std;

int denominaciones[9]={500,200,100,50,20,10,5,2,1};
int cantidadbilletes[9]={0};
int residuo = 0;

int main (){
    int monto;
    string tipo;

cout << "Ingresa la cantidad:\n";
cin >> monto;
for (int denominacion = 0; denominacion < 9; denominacion++)
{
    residuo = (denominacion==0)?monto:residuo;
    cantidadbilletes[denominacion]=residuo/denominaciones[denominacion];
    residuo = residuo%denominaciones[denominacion];
}
for (int posicion = 0; posicion < 9; posicion++){
tipo = (posicion < 5)?"billetes":"monedas";
cout << tipo << " de " <<denominaciones[posicion]<<": "<<cantidadbilletes[posicion] << "\n";
}
return 0;
}
