/*
Autor: Adriana Marlene Silva Lopez
Fecha: 24/Octubre/2022
Description: Este programa muestra el cambio desglosado en billetes y monedas 
*/

#include <iostream>
using namespace std;
/* viod obtenercambio (int);
void obtenermomedas (int);
void imprimircambio(string);
*/
int quinientos = 0, dosientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;

int main(){
int dinero;
int residuo;
cout << "Cantidad de dinero";
cin >> dinero;

quinientos = dinero/500;
residuo = dinero%500;
dosientos = residuo/200;
residuo = residuo%200;
cien = residuo/100;
residuo = residuo%100;
cincuenta = residuo/50;
residuo = residuo%50;
veinte = residuo/20;
residuo = residuo%20;
diez = residuo/10;
residuo = residuo%10;
cinco = residuo/5;
residuo = residuo%5;
dos = residuo/2;
residuo = residuo%2;
uno = residuo/1;
residuo = residuo%1;

/*obtenercambio (dinero)
imrimpircambio ("total")

obtenermoneda (dinero)
imprimircambio("monedas")
*/
return 0;
}