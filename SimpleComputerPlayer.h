//Defines the methods to be implemented in SimpleComputerPlayer.cpp

#include <iostream>
#include <string>
#include <array>
#include "Player.h"

using namespace std;

#ifndef SIMPLECOMPUTERPLAYER_H
#define SIMPLECOMPUTERPLAYER_H

class SimpleComputerPlayer : public Player{
 public:
  SimpleComputerPlayer();
  string getName();
  void setName(string);
  int move();
};



#endif 
