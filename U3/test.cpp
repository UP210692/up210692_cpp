#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

void cargarvector(int v[], int tamano){
    for (int elemento = 0; elemento < tamano; elemento++)
    {
        cout << "Dame el valor "<<elemento<<":"<<endl;
        cin >> v[elemento];
    }
}
void imprimirvector (int v[], int tamano){
    for (int elemento = 0; elemento < tamano; elemento++)
    {
        cout<<v[elemento];
    }
    cout << endl;
}  
int main (){
    int numeros [100] = {0};
    char c[6];
    cargarvector(numeros,6);
    imprimirvector(numeros,6);
    cout << endl;
    getchar();
    /*    for (int contador; contador<6; contador++)
    {
        cout <<"Dame un valor"<<contador
        cin <<c[contador];
    }
    cout << endl;
for (int contador; contador<6; contador++)
    cout <<c[constador]<<"";

    get char ();
}

//mejorar 
void llenarvector (int v[], int tamaño){
    int numeros [100] = (0);
    char c[5];

    llenarvector(numeros,6);
    
}*/
return 0;
}