//Contains the main method for the project

#include <iostream>
#include <string>
#include <array>
#include "Player.h"
#include "Board.h"
#include "HumanPlayer.h"
#include "SimpleComputerPlayer.h"

using namespace std;

static Board board;

int main(int argc, char*argv[]){
  string flag1 = argv[1];
  string flag2 = argv[2];
  Player* player1;
  Player* player2;
  bool p1, p2;
 
  cout << "Let's Start a Game of Connnect 4" << endl;

  cout << "Player One, please enter your name: ";
    
  if(flag1 == "-h"){
    player1 = new HumanPlayer();
    p1=true;
  }
  else{
    player1 = new SimpleComputerPlayer();
    cout << "Zoey" << endl;
    p1=false;
  }
  
  cout << "Player Two, please enter your name: ";
   
  if(flag2 == "-h"){
    p2=true;
    player2 = new HumanPlayer();
  }
  else{
    p2=false;
    player2 = new SimpleComputerPlayer();
    cout << "Zoey" << endl;
  }
  

  board.printBoard();

  bool play = true;

  while(play){
    if(play){
      if(board.canMove()){
	int loc;
	if(p1)
	  loc = player1->move();
	else{ 
	  loc = board.getAvailRow();
	  cout << "Zoey's turn, Please enter an integer between 1 and 7: " << loc << endl;
	}
	board.update("X", loc);
	board.printBoard();
	if(board.checkWin(loc)){
	  cout << player1->getName() << " Connected Four and Wins!" << endl;
	  play=false;
	}
      }
      else{
	cout << "The board is full, it is a draw!" << endl;
	play=false;
      }
    }

    if(play){
      if(board.canMove()){
	int loc2;
	if(p2)
	  loc2 = player2->move();
	else{
	  loc2 = board.getAvailRow();
	  cout << "Zoey's turn, Please enter an integer between 1 and 7: " << loc2 << endl;
	}
	board.update("O", loc2);
	board.printBoard();
	if(board.checkWin(loc2)){
	  cout << player2->getName() << " Connected Four and Wins!" << endl;
	  play=false;
	}
      }
      else{
	cout << "The board is full, it is a draw!" << endl;
	play=false;
      }
    }




  }
  

  return EXIT_SUCCESS;

}//main

