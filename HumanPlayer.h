//HumanPlayer.h defines the methods to be implemented in HumanPlayer.cpp

#include <iostream>
#include <string>
#include <array>
#include "Player.h"

using namespace std;


#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

class HumanPlayer : public Player{
 public:
  HumanPlayer();
  string getName();
  void setName(string);
  int move();

};





#endif 
