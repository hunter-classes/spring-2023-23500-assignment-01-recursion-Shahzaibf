#include <iostream>
#include "knights.h"

int main(){
    int board[5][5];
    fill(board);
    solve(board,0,0,1);
    print(board);
    return 0;
}