#include <iostream>
using namespace std;

int main(){
    int contador;
    float temperatura;
    float AcumTemp=0;    
    do{
        cout << "Give me the temperature:";
        cin >> temperatura;
        AcumTemp+=temperatura;
        contador ++;
    }while(contador < 6);

    return 0;
}