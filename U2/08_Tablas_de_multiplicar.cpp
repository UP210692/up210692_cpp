#include <iostream>
using namespace std;
#include <stdio.h>
 
int main()
{
    int i;
    int numero;
    int lim;
 
    cout <<"Enter an integer number:\n";
    cin >> numero;
    cout << "Table limit:\n";
    cin >> lim;
    cout <<"The multiplication table of " <<numero<< " is:\n"<<endl;
    for ( i = 1 ; i <= lim ; i++ ) {
        cout << "\n|"<<i<<"\t x \t"<< numero<<"\t=\t"<<(i * numero)<<"\t |\n";
        for (int f=0; f<=41;f++){
            cout << "-";
        }
        cout << "\n";
    }
    return 0;
}

