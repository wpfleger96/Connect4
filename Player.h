//Defines the methods to be inherted by children of the Player class

#include <iostream>
#include <string>
#include <array>

using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player{
 protected:
  string name;
 public:
  virtual string getName() = 0;
  virtual void setName(string) = 0;
  virtual int move() = 0;
};






#endif 
