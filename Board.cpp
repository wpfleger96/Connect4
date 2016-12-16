//Board.cpp implements the methods defined in Board.h

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include "Board.h"


using namespace std;


Board::Board(){
  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 15; j++){
      if(j % 2 == 0){
	board[i][j] = "|";
      }
      else{
	board[i][j] = "_";
      }
    }
  }
}//Board

Board::~Board(){
  delete board;
}//~Board

void Board::printBoard(){
  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 15; j++){
      cout << board[i][j];
    }
    cout << endl;
  }
}//printBoard

void Board::update(string disk, int loc){
  if(board[5][loc] == "_"){
    board[5][loc] = disk;
  }
  else if(board[4][loc] == "_"){
    board[4][loc] = disk;
  }
  else if(board[3][loc] == "_"){
    board[3][loc] = disk;
  }
  else if(board[2][loc] == "_"){
    board[2][loc] = disk;
  }
  else if(board[1][loc] == "_"){
    board[1][loc] = disk;
  }
  else if(board[0][loc] == "_"){
    board[0][loc] = disk;
  }
}//update

bool Board::checkWin(int loc){
  for(int i=0; i<3; i++){
    string disk = board[i][loc];
    if(disk != "_"){
      if(board[i+1][loc] == disk && board[i+2][loc] == disk && board[i+3][loc] == disk){
	return true;
      }
    }
  }
  for(int i=0; i<6; i++){
    for(int j=1; j<8; j+=2){
      string disk = board[i][j];
      if(disk != "_"){
	if(board[i][j+2] == disk && board[i][j+4] == disk && board[i][j+6] == disk){
	  return true;
	}
      }
    }
  }
    
  return false;
}//checkWin

bool Board::canMove(){
  int numEmpty = 0;
  for(int i=0; i<6; i++){
    for(int j=0; j<15; j++){
      if(board[i][j] == "_"){
	numEmpty++;
      }
    }
  }
  if(numEmpty == 0){
    return false;
  }
  else{
    return true;
  }
}//canMove

int Board::getAvailRow(){
  for(int j=1; j<14; j+=2){
    for(int i=5; i>=0; i--){
      if(board[i][j] == "_"){
	return j;
      }
    }
  }
}//getAvailRow
