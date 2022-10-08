# EXERCISE 1

### The next program shows the corresponding tax according to the annual rent.

| RENT | TAX |
|-------|----------|
|Less than $10,000| 5% |
|Between $10,000 and $20,000| 15% |
|Between $20,000 and $35,000| 20% |
|Between $35,000 and $60,000| 30% |
|More than $60,000| 45% |

```c++

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
    
```
The structure of the code is:

    * First whe have the libraries and main function
    * Then we declare the variables
    * We ask the user for his income and save it in the variable "renta"