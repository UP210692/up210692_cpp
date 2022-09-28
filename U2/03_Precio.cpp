#include <iostream>
using namespace std;
int main (){
    int precio;
    int edad;

    cout << "¿Cuál es tu edad?\n";
    cin >> edad;

if (edad < 4){
        cout << "Tu entreda es gratis\n";
}
else if ((edad >=4) && (edad <= 18)){
        cout << "Tu entrada es de $5 pesos\n";
}
else if (edad > 18){
        cout << "Tu entrada es de $10 pesos \n";
    
}

return 0;
}