#include <iostream>
using namespace std;

void tablero();


int main (){
    tablero();
    return 0;
}

void tablero(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
        cout<<"_|"
        }
        cout << endl;
    }
}

