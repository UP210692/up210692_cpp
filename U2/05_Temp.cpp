#include <iostream>
using namespace std;

int main(){
    int contador = 1;
    float temperatura;
    float temp1;
    float AcumTemp=0;
    float promedio;
    float suma;
    float may = INT8_MIN;
    float men = INT8_MAX; 
    //float i;   
    do{
        cout <<"Give me the temperature:\n";
        cin >> temperatura; 
    temp1=temperatura;
        if (temperatura<men)
        {
            men=temperatura;
        }
        if (temperatura>men)
        {
            may=temperatura;
        } 
        suma = suma + temp1;
        promedio=suma/6;
        AcumTemp+=temperatura;
        contador ++;
    }while(contador <= 6);

    cout <<"Temperature total:\n"<<suma<<endl;
    cout << "Mean of the temperatures:\n"<<promedio<<endl; 
 
    cout << "Higher temperature is : \n"<<may <<endl;
    cout<<"Lower temperature is: \n"<< men <<endl;

    return 0;
}