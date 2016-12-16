//HumanPlayer.cpp implemenents the methods defined in HumanPlayer.h

#include <iostream>
#include <string>
#include "HumanPlayer.h"

using namespace std;

HumanPlayer :: HumanPlayer(){
  cin >> name;
}//HumanPlayer

string HumanPlayer::getName(){
  return name;
}//getName

void HumanPlayer::setName(string s){
  name = s;
}//setName

int HumanPlayer::move(){
  cout << name << "'s turn, Please enter an integer between 1 and 7: ";
  int loc;
  cin >> loc;
  cout << endl;
  return (loc + (loc-1));
}//move


