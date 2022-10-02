# EXERCISE 1

### This program shows the corresponding tax according to the annual rent.

| RENTA | IMPUESTO |
|-------|----------|
|Menos de $10,000| 5% |
|Entre $10,000 y $20,000| 15% |
|Entre $20,000 y $35,000| 20% |
|Entre $35,000 y $60,000| 30% |
|Mas de $60,000| 45% |

///c++
#include <iostream>
using namespace std;
int main() {
    int renta;
    float impuesto;
    cout << "¿Cual es tu renta anual? \n";
    cin >> renta;
   
    if(renta < 10000){
        cout << "Tu porcentaje de impositivo es: \n5%";
        impuesto = renta*.05;
    }
    if((renta >= 10000) && (renta < 20000)){
        cout << "Tu porcentaje de impositivo es: \n15%";
        impuesto = renta*.15;
    }
    if((renta >= 20000) && (renta < 35000)){
        cout << "Tu porcentaje de impositivo es: \n20%";
        impuesto = renta*.20;
    }
    if((renta >= 35000) && (renta < 60000)){
        cout << "Tu porcentaje de impositivo es: \n30%";
        impuesto = renta*.30;
    }
    if( renta >= 60000){
        cout << "Tu porcentaje de impositivo es: \n45%";
        impuesto = renta*.45;
    }
    cout << "\nTu impositivo es: \n$" << impuesto << " pesos" << endl;
    return 0;
}
///

