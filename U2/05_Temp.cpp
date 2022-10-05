#include <iostream>
using namespace std;

int main(){
    int contador;
    float temperatura;
    float AcumTemp=0;
    float promedio;
    float suma;    
    do{
        cout << "Give me the temperature:\n";
        cin >> temperatura;
        AcumTemp+=temperatura;
        contador ++;
    }while(contador < 6);
    suma = temperatura;
    cout <<"suma"<< temperatura;
    cout <<"El promedio de las temperaturas es:"<<endl;
     

    


    return 0;
}