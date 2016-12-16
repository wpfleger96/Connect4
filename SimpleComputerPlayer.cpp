//Impplements the methods defined in SimpleComputerPlayer.h

#include <iostream>
#include <string>
#include "SimpleComputerPlayer.h"

using namespace std;

SimpleComputerPlayer :: SimpleComputerPlayer(){
  name = "Zoey";
}//SimpleComputerPlayer

string SimpleComputerPlayer :: getName(){
  return name;
}//getName
  
void SimpleComputerPlayer :: setName(string s){
  name = s;
}

int SimpleComputerPlayer::move(){
  return 0;
}//move

