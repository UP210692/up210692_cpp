#include <iostream>
using namespace std;
int main (){
    int num;
    int resultado;

    cout << "Enter the number\n";
    cin >> num;
    while (num != 0)
    {
        if (num%2 == 0)
        {
            resultado = '0' + resultado;
        }
        
    }
    cout << "Resultado: \n" << resultado << endl;
    
    
}