#include <iostream>
using namespace std;
int main (){
    float puntuacion;
    float inaceptable = 0.0;
    float aceptable = 0.4;
    float meritorio = 0.6;
    double dinero;

cout << "¿Cual es tu puntuación? \n";
cin >> puntuacion;

if ( puntuacion == inaceptable){
    cout << "Tu nivel de rendimiento es inaceptable \n";
    dinero = 2400*inaceptable;
}
else if (puntuacion == aceptable){
        cout << "Tu nivel de rendimiento es aceptable \n";
        dinero = 2400*aceptable;
}
else if (puntuacion >= meritorio){
        cout << "Tu nivel de rendimiento es meritorio \n";
        dinero = 2400*meritorio;
}
else cout << "Tu puntuiacion no es aceptable \n";


cout << "Tu ganancia es de:\n$" << dinero << " pesos" << endl;
return 0;
}