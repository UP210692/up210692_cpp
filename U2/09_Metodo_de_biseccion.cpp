#include <iostream>
using namespace std;
int main (){
    float a;
    float b;
    float c;
    float ya;
    float yb;
    float yc;

    cout << "Enter the value of a\n";
    cin >> a;
    cout << "Enter the value of b\n";
    cin >> b;
    
    c = a+b/2;
    cout<< "hhh"<<c;
    do
    {   

        if(ya*yc<0)
        b=c;
        else if(yc*yb<0)
        a=c;
        else cout<<"No exist";
    }
    while(yc>-0.01 || yc<0.01);

}