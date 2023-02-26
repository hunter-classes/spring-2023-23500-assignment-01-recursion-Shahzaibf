#include <iostream>
#include <iomanip>


int rowpos[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int colpos[8] = {-1, -2, -2, -1, 1, 2, 2, 1};


void fill(int board[5][5]){
    for(int i = 0;i < 5; i++){
        for(int j = 0;j < 5;j++){
            board[i][j] = -1;
        }
    }
}
void print(int board[5][5]){
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            std::cout << " " << std::setw(2) << board[i][j] << " ";
        }
        std::cout << "\n";
    }
}

bool done(int board[5][5]){
    for(int i = 0;i < 5;i++){
        for(int j = 0;j<5;j++){
            if(board[i][j] == -1){
                return false;
            }
        }
    }
    return true;
}

bool isValid(int board[5][5], int posx, int posy){
    return (board[posx][posy] == -1 && posx >= 0 && posx < 5 && posy >= 0 && posy < 5);
}

void solve(int board[5][5], int posx, int posy, int mvs){
    if(!isValid(board,posx,posy) || board[posx][posy] > 0){
        return;
    }
    board[posx][posy] = mvs;

    for(int i = 0;i < 8;i++){
        solve(board, posx + rowpos[i], posy + colpos[i], mvs + 1);
    }

    if (done(board)){
        return;
    }
    
    board[posx][posy] = -1;
}