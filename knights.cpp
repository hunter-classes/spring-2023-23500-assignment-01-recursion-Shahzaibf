#include <iostream>

int rowpossmoves[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int colpossmoves[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int board[5][5];

void print(){
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            std::cout << board[i][j] << " ";
        }
        std::cout << "\n";
    }
}

