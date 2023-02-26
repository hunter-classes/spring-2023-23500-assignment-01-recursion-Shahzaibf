#pragma once

void fill(int board[5][5]);
void print(int board[5][5]);
bool done(int board[5][5]);
bool isValid(int board[5][5],int posx, int posy);
void solve(int board[5][5],int posx, int posy, int mvs);