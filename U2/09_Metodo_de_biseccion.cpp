#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float ecuacion(float numero){
    return (pow(numero,2)-numero-12)
}
int main(){
    float a,b,c,ya,yb,yc;
    cout << "Value of A: \n";
    cin << a;
    cout << "Value of B: \n";
    cin << b;
do
    {   

        if(ya*yc<0)
        b=c;
        else if(yc*yb<0)
        a=c;
        else cout<<"No exist";
    }
    while(yc>=-0.01 || yc<=0.01);




    return 0;
}