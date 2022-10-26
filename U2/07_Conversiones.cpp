#include <iostream>
using namespace std;
int main (){
    int numero;
    string binario="";
    cout << "Integer number for conversion: \n";
    cin >> numero;
    if (numero>0)
    {
        while(numero>0){
            if(numero%2==0){
                binario = "0"+binario;
            }
            else {
                binario = "1"+binario;
            }
            numero = numero/2;
        }
    }
    else if (numero == 0){
            binario = "0";
        }
        else {
            binario = "This number cannot convert";
        }
    
    cout << "The result of the convertion is: \n"<< binario<<endl;
    return 0;
}