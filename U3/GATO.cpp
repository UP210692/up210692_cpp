#include <iostream>
using namespace std;
char juego[3][3]={{'1','2','3'},
                  {'4','5','6'},
                  {'7','8','9'}};
char tablero [11][11];
void creartablero();
string Jugador1;
string Jugador2;
char posiblesjugadas();
int verificarjugada(char jugada);
int turno;
void actualizarturno();
int main (){
    int numerodeturnos = 0;
    int banderajugada = 0;
    while (numerodeturnos<9){
        system ("cls");
        creartablero();
        banderajugada = verificarjugada(posiblesjugadas());
        if(banderajugada==1){
        numerodeturnos++;
        }
    return 0;
    }
    cout << "\t" << "\t ****************  JUEGO DEL GATO  **************** \n";
    int seleccionarjugada;
    cout << "Selecciona la Jugada: \n1)Player vs Player\n2)Player vs Computer\n";
    cin >> seleccionarjugada;
    tablero [0][0]='x';
    char jugada = posiblesjugadas();
    cout << endl<<jugada;
    cout << endl;
    cout << verificarjugada(jugada);
    return 0;
}

void creartablero()
{
    int x=0,y=0;
    for (int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            if(i<5&&i%2==1){
                cout << "___";
            }else {
                if(i<5){
                    cout << " " <<tablero[x][y]<< " ";
                    y++;
                }else{
                    cout << "   ";
                }
            }
            if (j<2){
                cout << "|";
            }
        }
        y=0;
        if (i%2 == 0){
            x++;
        }
        cout << endl;
        }
    }
char posiblesjugadas(){
    cout << "opciones de jugada" << endl;
    string opciones = "abcdefghi";
    int contador = 0;
    char jugada;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << opciones[contador]<< ") ["<<i<<","<<j<<"]";
            if (tablero[i][j]!= NULL){
                cout <<"ocupado";
            }
        cout << endl;
        contador ++;
        }
    }
    cout <<"elige una jugada: \n";
    cin >> jugada;
    return jugada;
}
void actualizarturno(int x, int y){
    if(turno %2 == 0){
     tablero[x][y] = 'X';
    }else {
        tablero[x][y] = 'O';
    }
    turno ++;
}

int verificarjugada(char jugada){
    if(jugada >= 'a' && jugada <= 'i'){
        switch (jugada){
            case 'a':
                if(tablero[0][0] == NULL){
                    actualizarturno(0,0);
                    return 1;
                } 
                break;
            case 'b':
                if(tablero[0][1] == NULL){
                    actualizarturno(0,1);
                    return 1;
                } 
                break;
            case 'c':
                if(tablero[0][2] == NULL){
                    actualizarturno(0,2);
                    return 1;
                } 
                break;
            case 'd':
                if(tablero[1][0] == NULL){
                    actualizarturno(1,0);
                    return 1;
                } 
                break;
            case 'e':
                if(tablero[1][1] == NULL){
                    actualizarturno(1,1);
                    return 1;
                } 
                break;
            case 'f':
                if(tablero[1][2] == NULL){
                    actualizarturno(1,2);
                    return 1;
                } 
                break;
            case 'g':
                if(tablero[2][0] == NULL){
                    actualizarturno(2,0);
                    return 1;
                } 
                break;
            case 'h':
                if(tablero[2][1] == NULL){
                    actualizarturno(2,1);
                    return 1;
                } 
                break;
            case 'i':
                if(tablero[2][2] == NULL){
                    actualizarturno(2,2);
                    return 1;
                } 
                break;
        }

    }
    return 0;
}