//Board.h defines methods to be implemented in Board.cpp

#include <iostream>
#include <array>

using namespace std;

#ifndef BOARD_H
#define BOARD_H


class Board{
 private:
  string board[6][15];
 public:
  Board();
  ~Board();
  void printBoard();
  void update(string, int);
  bool checkWin(int);
  bool canMove();
  int getAvailRow();
};
#endif
