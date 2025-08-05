#include <iostream>
#include <string>
#include "game.hpp"
using namespace std;


int main(){
  //Game introduction

  cout << "Welcome to The Mysterious Temple!\n";
  gameDesc();

  //Game loop
  while(getPlayerInput()){};

  cout << "NB: You'll earn points at each right answer found";
  return 0;
}