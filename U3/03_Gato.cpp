/*
Autor: Adriana Marlene Silva Lopez
Fecha: 03/Noviembre/2022
Description: Este programa realiza el juego del gato 
*/

#include <iostream>

using namespace std; 

//FUNCTION PROTOTYPE
void colocarJugada(int);
int seleccionarJugada();
bool comprobarCasillaOcupada(int);
void crearTablero();

//GLOBAL VARIABLE
char estGato[6][11];
int turnoJugador = 1; 
char areaJuego[3][3] ={ {'x', '2', 'x'},
                       {'4', 'o', '6'},
                       {'x', '8', '9'}};
int jugada;



int main(){
    
    int jugada; 
    bool casillaOcupada = true; 
    system("clean");
    jugada = seleccionarJugada();
    cout << jugada << endl;

    for (int i = 1; i < 9; i++)
    {
        casillaOcupada = comprobarCasillaOcupada(i);
    if (casillaOcupada == true)
        cout << "ocupadp";
    else   
        cout << "libre";

    cout << endl;
    }
    
    

/*
    do{
        jugada = SeleccionarJugada();
        casillaOcupada = comprobarCasillaOcupada(jugada);
        if(casillaOcupada == true){
            //colocarJugada(jugada);
            //system("clear");
            //construirTablero();
        cout << "Otra vez";
        }
    }while(casillaOcupada == true);
    */
    return 0; 
}

void colocarJugada(int jugada){
    char valorJugada; 

    if(turnoJugador%2==0){ //Parees
        valorJugada = 'x';
    }else{
        valorJugada = 'o';
    }
    if(jugada == 1){
        areaJuego[0][0] = valorJugada;
    }
}

int seleccionarJugada(){

    do{
        cout << "Dame tu jugada: ";
        cin >> jugada; 
    }while(jugada < 1 || jugada > 9);
        
        return jugada; 
}

bool comprobarCasillaOcupada(int jugada){
    int row, col;
    if(jugada == 1){
        row = 0;
        col = 0;
    }else if(jugada == 2){
        row = 0;
        col = 1; 
    }else if(jugada == 3){
        row = 0;
        col = 2; 
    }else if(jugada == 4){
        row = 1;
        col = 0; 
    }else if(jugada == 5){
        row = 1;
        col = 1; 
    }else if(jugada == 6){
        row = 1;
        col = 2; 
    }else if(jugada == 7){
        row = 2;
        col = 0; 
    }else if(jugada == 8){
        row = 2;
        col = 1; 
    }else if(jugada == 9){
        row = 2;
        col = 2; 
    }
    if(areaJuego[row][col] == 'x' || areaJuego[row][col] == 'o'){
        return true;
    }else{
        return false; 
    }

}

void crearTablero()
{
    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            if (row % 2 == 0 && col != 3 && col != 7)
            {
                cout << "-";
            }
            else if (row % 2 == 0 && col != 3 || col != 7)
            {
                cout << "|";
            }
        }
    }
}