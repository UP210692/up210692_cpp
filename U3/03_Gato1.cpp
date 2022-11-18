#include <iostream>


using namespace std; 

//FUNCTION PROTOTYPE
void setGame(int); //colocarJugada
int selectGame(); //seleccionarJugada
bool checkBusySlot(int); //
void createBoard(); //crearTablero
void printPlayMatrix();
//void estructuraGato(); 
//void requestMove(); //pedirJugada
//void reviewPlay(); //revisarJugada
void reviewWinner(); //revisarGanador
int getGame(); //obtenerJugada //jugada tablero real 
int getBestGame(); //obtenerMejorJugada //jugada tablero imaginario 

//GLOBAL VARIABLE
char estructGato[6][11];
int playerturn = 0; //turnoJugador
//areaJuego
char gamearea[3][3] = {{'1', '2', '3'},
                       {'4', '5', '6'},
                       {'7', '8', '9'}};

int game;                      // jugada
bool winner = false;           // ganador
const string PC = "Maquina";   // ya no le puedes asignar otro valor
const string HUMAN = "Humano"; // Humano
const string BOARD = "Real";   // Tablero
const string BOARDIMAGINARY = "Imaginario";
int playerwinner = 0;
bool boxBusy = true;
int main()
{

    int game;
    // casillaOcupada
    system("clear");

    while (playerturn < 9 && winner == false)
    {
        //system("cls"); // limpio
        do
        {
            game = selectGame();
            cout << game << endl;
            boxBusy = checkBusySlot(game);
        } while (boxBusy == true);
        if (boxBusy == false)
        { // esta libre
            setGame(game);
            system("clear");
            printPlayMatrix();
        /*
        if(playerwinner == 1)
        {
            cout << "Gandor x";
        }
        else if (playerwinner == 2)
        {
            cout << "Gandor o";
        }
        else if (playerwinner == 3)
        {
            cout << "Tie";
        }
            playerturn++; // sigue el otro
        }
        */
    }
  
    if (winner == true)
    cout << "Ganaste";
    else 
    cout << "Empate";


    /*
        while(turn < 9 && winner = false){
            if(turn%2 == 0){
                game = requestGame();
            }else{
                game = getGamePC();
            }

            gameOK = reviewPlay(game);
            if (gameOK == true){
                setGame();
                winner = reviewWinner();
            }
            if (winner == true){
                cout << "Mensaje al ganador";
            }
        }
    */
    return 0;
}

void setGame(int game){
    char moveValue; //valorJugada

    if(playerturn%2==0){ //Parees
        moveValue = 'x';
    }else{
        moveValue = 'o';
    }
    if(game == 1)
        gamearea[0][0] = moveValue;
    else if (game == 2)
        gamearea[0][1] = moveValue;
    else if (game == 3)
        gamearea[0][2] = moveValue;
    else if (game == 4)
        gamearea[1][0] = moveValue;
    else if (game == 5)
        gamearea[1][1] = moveValue;
    else if (game == 6)
        gamearea[1][2] = moveValue;
    else if (game == 7)
        gamearea[2][0] = moveValue;
    else if (game == 8)
        gamearea[2][1] = moveValue;
    else if (game == 9)
        gamearea[2][2] = moveValue;
}

int selectGame()
{
    int game;
    do
    {
        cout << "Dame tu jugada: ";
        cin >> game;
    } while (game < 1 || game > 9);
    return game;
}

bool checkBusySlot(int game){
    int row, col;
    if(game == 1)
    {
        row = 0;
        col = 0;
    }else if(game == 2)
    {
        row = 0;
        col = 1; 
    }else if(game == 3)
    {
        row = 0;
        col = 2; 
    }else if(game == 4)
    {
        row = 1;
        col = 0; 
    }else if(game == 5)
    {
        row = 1;
        col = 1; 
    }else if(game == 6)
    {
        row = 1;
        col = 2; 
    }else if(game == 7)
    {
        row = 2;
        col = 0; 
    }else if(game == 8)
    {
        row = 2;
        col = 1; 
    }else if(game == 9)
    {
        row = 2;
        col = 2; 
    }
    if(gamearea[row][col] == 'x' || gamearea[row][col] == 'o')
    {
        return true;
    }else{
        return false; 
    }

}

void createBoard()
{
    int y, x;
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            if (row == 0 || row == 3 || row == 6 || row == 8)
            {
                cout << "   |   |   " << endl;
            }
            else if (row == 1 || row == 4 || row == 7)
            {
                if(x = 1){
                    cout << " " << gamearea[x-1][y] << "   |   " << gamearea[x-1][y] << "   |   " << gamearea[x-1][y] << "   " << endl;
                }
                if(x = 4){
                    cout << " " << gamearea[x-3][y] << "   |   " << gamearea[x-3][y] << "   |   " << gamearea[x-3][y] << "   " << endl;
                }
                if(x = 7){
                    cout << " " << gamearea[x-4][y] << "   |   " << gamearea[x-4][y] << "   |   " << gamearea[x-4][y] << "   " << endl;
                }
                y++; 
            }else if(row == 2 || row == 5){
                cout << "_|_|_" << endl;
            }
        }
    }
}

/*
int getGame(){
    srand();
    //Revisar que la PC gana 
    game = getBestGame(PC);
    if (game != -1){
        return game;
    }

    game = getBestGame(HUMAN);
    if(game != -1){
        return game; 
    }

    //return 1 + srand()%9; //random entre 1 y 9
}
*/

//Jugada de TABLERO IMAGINARIO
/*
void colocarJugadaImaginaria(int game){
    char moveValue; 

    if(playerturn%2==0){ //Parees
        moveValue = 'x';
    }else{
        moveValue = 'o';
    }
    if(game == 1){
        gamearea[0][0] = moveValue;
    }
    //cout << moveValue << endl; 
}
*/ 

void printPlayMatrix(){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << gamearea[row][col] << " ";
        }
        cout << endl;
        
    }
    
}

/*
void reviewWinner() {
     while (playerturn < 9 && winner == false)
    {
        system("clear"); // limpio
        do
        {
            game = selectGame();
            cout << game << endl;
            boxBusy = checkBusySlot(game);
        } while (boxBusy == true);
        if (boxBusy == false)
        { // esta libre
            setGame(game);
            system("clear");
            printPlayMatrix();
            playerturn++; // sigue el otro
        }
    }
    if (playerwinner != 1){
        if(
            gamearea[0][0] == 'X' && gamearea[0][1] == 'X' && gamearea[0][2] == 'X' ||
            gamearea[1][0] == 'X' && gamearea[1][1] == 'X' && gamearea[1][2] == 'X' ||
            gamearea[2][0] == 'X' && gamearea[2][1] == 'X' && gamearea[2][2] == 'X' ||
            gamearea[0][0] == 'X' && gamearea[1][0] == 'X' && gamearea[2][0] == 'X' ||
            gamearea[0][1] == 'X' && gamearea[1][1] == 'X' && gamearea[2][1] == 'X' ||
            gamearea[0][2] == 'X' && gamearea[1][2] == 'X' && gamearea[2][2] == 'X' ||
            gamearea[0][0] == 'X' && gamearea[1][1] == 'X' && gamearea[2][2] == 'X' ||
            gamearea[0][2] == 'X' && gamearea[1][1] == 'X' && gamearea[2][0] == 'X' 
        )
        {
        winner = true;
        playerwinner = 1;
        }
        if(
            gamearea[0][0] == 'o' && gamearea[0][1] == '0' && gamearea[0][2] == 'X' ||
            gamearea[1][0] == 'o' && gamearea[1][1] == '0' && gamearea[1][2] == 'X' ||
            gamearea[2][0] == 'o' && gamearea[2][1] == '0' && gamearea[2][2] == 'X' ||
            gamearea[0][0] == 'o' && gamearea[1][0] == '0' && gamearea[2][0] == 'X' ||
            gamearea[0][1] == 'o' && gamearea[1][1] == '0' && gamearea[2][1] == 'X' ||
            gamearea[0][2] == 'o' && gamearea[1][2] == '0' && gamearea[2][2] == 'X' ||
            gamearea[0][0] == '0' && gamearea[1][1] == '0' && gamearea[2][2] == 'X' ||
            gamearea[0][2] == 'o' && gamearea[1][1] == 'o' && gamearea[2][0] == 'X' 
    )
    {
        winner  = true;
        playerwinner = 2;
    }
    else {
        playerwinner = 3;
        }
    }
}
*/

void reviewWinner(){

    if(winner != 1){
    if(gamearea[0][0] != 'x' && gamearea[0][1] == gamearea[0][0] && gamearea[0][2] == gamearea[0][0]
        || gamearea[1][0] != 'x' && gamearea[1][1] == gamearea[1][0] && gamearea[1][2] == gamearea[1][0]
            || gamearea[2][0] != 'x' && gamearea[2][1] == gamearea[2][0] && gamearea[2][2] == gamearea[2][0]

                || gamearea[0][0] != 'x' && gamearea[1][0] == gamearea[0][0] && gamearea[2][0] == gamearea[0][0]
                    || gamearea[0][1] != 'x' && gamearea[1][1] == gamearea[0][1] && gamearea[2][1] == gamearea[0][1]
                        || gamearea[0][2] != 'x' && gamearea[2][1] == gamearea[0][2] && gamearea[2][2] == gamearea[0][2]
                            
                            || gamearea[0][0] != 'x' && gamearea[1][1] == gamearea[0][0] && gamearea[2][2] == gamearea[0][0]
                                || gamearea[0][2] != 'x' && gamearea[1][1] == gamearea[0][2] && gamearea[2][1] == gamearea[0][2])
    {
        winner = true;
        //playerwinner = 1;
    }
    if(gamearea[0][0] != 'o' && gamearea[0][1] == gamearea[0][0] && gamearea[0][2] == gamearea[0][0]
        || gamearea[1][0] != 'o' && gamearea[1][1] == gamearea[1][0] && gamearea[1][2] == gamearea[1][0]
            || gamearea[2][0] != 'o' && gamearea[2][1] == gamearea[2][0] && gamearea[2][2] == gamearea[2][0]

                || gamearea[0][0] != 'o' && gamearea[1][0] == gamearea[0][0] && gamearea[2][0] == gamearea[0][0]
                    || gamearea[0][1] != 'o' && gamearea[1][1] == gamearea[0][1] && gamearea[2][1] == gamearea[0][1]
                        || gamearea[0][2] != 'o' && gamearea[2][1] == gamearea[0][2] && gamearea[2][2] == gamearea[0][2]
                            
                            || gamearea[0][0] != 'o' && gamearea[1][1] == gamearea[0][0] && gamearea[2][2] == gamearea[0][0]
                                || gamearea[0][2] != 'o' && gamearea[1][1] == gamearea[0][2] && gamearea[2][1] == gamearea[0][2])
    {
        winner = true;
        //playerwinner = 2;
    }
    }
}