#include <iostream>
using namespace std;

int main(){
    int contador = 1;
    float temperatura;
    float AcumTemp=0;
    float promedio;
    float suma;    
    do{
        cout <<"Give me the temperature:\n";
        cin >> temperatura;
        AcumTemp+=temperatura;
        promedio == AcumTemp/6;
        contador ++;
    }while(contador <= 6);
cout << "Promedio" << promedio<<endl; 

     

    


    return 0;
}