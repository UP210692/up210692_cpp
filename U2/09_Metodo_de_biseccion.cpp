#include <iostream>
#include <cmath>
using namespace std;

float ecuacion(float numero)
{
    return (pow(numero, 2)-numero-12);
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
    cout << "ya= "<<yb<<"yb= "<<yb<<endl<<"yc= "<<yb<<endl; 
do
    {   

        if(ya*yc<0)
        b=c;
        else if(yc*yb<0)
        a=c;
        else cout<<"No exist";
        break;
    }
    while(yc>=-0.01 || yc<=0.01);
cout << "b= "<<c<<endl;

    return 0;
}