#include <iostream>
using namespace std;
int main() {
    int renta;
    float impuesto;
    cout << "¿Cual es tu renta anual? \n";
    cin >> renta;
   
    if(renta < 10000){
        impuesto = renta*.05;
    }
    if((renta >= 10000) && (renta < 20000)){
        impuesto = renta*.15;
    }
    if((renta >= 20000) && (renta < 35000)){
        impuesto = renta*.20;
    }
    if((renta >= 35000) && (renta < 60000)){
        impuesto = renta*.30;
    }
    if( renta >= 60000){
        impuesto = renta*.45;
    }
   
    cout << "Tu impositivo es: \n" << impuesto << endl;
   
    return 0;
}