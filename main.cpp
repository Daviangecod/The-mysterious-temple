#include <iostream>
#include <string>
using namespace std;

void gameDesc(){
  cout << "You find yourself standing infront of a grand temple entrance.\n";
  cout << "The doors are old and creaky, but they slowly open with a gentle push.\n";
  cout << "As you step inside, you notice a dimly lit hallway with two doors on either side.\n";
  cout << "The air is musty, and the smell of old dust fills your nostrils.\n";
}

int main(){
  //Game introduction

  cout << "Welcome to The Mysterious Temple!\n";
  gameDesc();
  return 0;
}