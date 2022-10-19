#include <iostream>
#include <cmath>
using namespace std;

float ecuacion(float numero)
{
    return (pow(numero, 2)-numero-6);
}

int main (){
    float a,b,c,ya,yb,yc;

    cout << "Enter the value of a\n";
    cin >> a;
    cout << "Enter the value of b\n";
    cin >> b;
    
    c = (a+b)/2;
    ya = ecuacion(a);
    yb = ecuacion(b);
    yc = ecuacion(c); 
    cout<< "c="<<c<<endl;
    cout << "ya="<<yb<<endl; 
    return 0;
}