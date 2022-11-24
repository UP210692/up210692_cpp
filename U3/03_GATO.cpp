#include <iostream>
#include <stdlib.h>
using namespace std;

char board [3][3] = {{'1','2','3'},
                     {'4','5','6'},
                     {'7','8','9'}};

void drawBoard();
bool placemarker(int slot);
char current_marker;
int player;
string player1;
string player2;
int winner();
void game();
void swap_player_and_marker();
int main (){
    cout << "*************** TIC-TAC-TOE *************** \n";

    cout<<"Player 1 name:\n";
    cin>>player1;

    cout<<"Player 2 name:\n";
    cin >> player2;
    drawBoard();
    system("clear");
    game();
    
    return 0;
}

void drawBoard(){
    cout <<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<< board[0][2]<<endl;
    cout << "-----------\n";
    cout <<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<< board[1][2]<<endl;
    cout << "-----------\n";
    cout <<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<< board[2][2]<<endl;
}
bool placemarker(int slot){
    int row;
    int col;
   if(slot == 1){
    row = 0;
    col = 0;
   }
    if(slot == 2){
    row = 0;
    col = 1;
   }
    if(slot == 3){
    row = 0;
    col = 2;
   }
    if(slot == 4){
    row = 1;
    col = 0;
   }
    if(slot == 5){
    row = 1;
    col = 1;
   }
    if(slot == 6){
    row = 1;
    col = 2;
   }
    if(slot == 7){
    row = 2;
    col = 0;
   }
    if(slot == 8){
    row = 2;
    col = 1;
   }
    if(slot == 9){
    row = 2;
    col = 2;
   }
    if(board[row][col]!='x'&& board[row][col]!='o'){
        board [row][col]=current_marker;
        return true; 
    }else return false;
}
int winner(){
    for (int i=0; i<3; i++){
        //rows
        if (board[i][0]==board[i][1]&&board[i][1]==board[i][2]){
            return player;
        }
        //columns
        if (board[0][i]==board[1][i]&&board[1][i]==board[2][i]){
            return player;
        }
        //diagonals
        if (board[0][0]==board[1][1] && board[1][1] == board[2][2]){
            return player;
        }
        if (board[0][2]==board[1][1]&&board[1][1]==board[2][0]){
            return player;
        }
    }
    return 0;
}
void game(){
    char marker_player;
    int slot;
    int player_won;
    cout <<"Player one choose your marker:\n";
    cin >> marker_player;

    player = 1;
    current_marker = marker_player;
    drawBoard();
    system ("clear");
    for (int i=0; i<9; i++)
    {   
        cout <<"It's a player "<<player<<"'s turn. Enter your slot:\n";
        cin>> slot;
        if (slot < 1 || slot > 9 ){
            cout << "That slot is invalid.\n Try another slot\n";
            i--;
            continue;
        }
        if(!placemarker(slot)){
            cout << "That slot occupied.\n Try another slot\n";
            i--;
            continue;
        }
        system ("clear");
        cout << "*************** TIC-TAC-TOE *************** \n";
        drawBoard();
        player_won = winner();
        if (player_won == 1){
            cout << "Player "<<player1<<" won! Congratulations!\n";
            break;
        }
        if (player_won == 2){
            cout << "Player "<<player2<<" won! Congratulations!\n";
            break;
        }
        swap_player_and_marker();
    }
    if (player_won == 0){
        cout << "That is a tie\n";
    }
}
void swap_player_and_marker(){
    if (current_marker == 'x'){
    current_marker = 'o';
    }else current_marker='x';
    if(player == 1){
        player = 2;
    }else player = 1;
}