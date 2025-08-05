#include <iostream>
#include <string>
#include "game.hpp"
using namespace std;

void gameDesc(){
    cout << "You find yourself standing infront of a grand temple entrance.\n";
    cout << "The doors are old and creaky, but they slowly open with a gentle push.\n";
    cout << "As you step inside, you notice a dimly lit hallway with two doors on either side.\n";
    cout << "The air is musty, and the smell of old dust fills your nostrils.\n\n";
    cout << "... Find your way out of the temple by solving simple puzzles.\n";
  };
  
bool getPlayerInput(){
    string input;
    cout << "What do you want to do?: Type in your answer!\n left\n right\n search\n quit\n";
    cin >> input;
  
    if(input == "left"){
      cout << "You head through the left door!!\n";
      descLeftRoom();
    }
    else if(input == "right"){
      cout << "You head through the right door!!\n";
    }
    else if(input == "search"){
      cout << "Found nothing of interest here, move on!!\n";
    }
    else if(input == "quit"){
      cout << "We are sad to see you leave!! well see you next time,... annyeong chingu!!\n" << endl;
      return false;
    }
    else{
      cout << "Sorry invalid input, choose one from the list.\n";
    }
    return true;
  }

void descLeftRoom(){
    cout << "You entered a room filled with ancient artifacts. There's mysterious symbol drawn on the wall.\n\n";
    cout << "POV : < I need to know what that symbol is! >\n";
    cout << "The symbol seems to be a riddle:\n\n 'What can be broken but never held?'\n";
    cout << "What is your answer?\n";
    string answer;
    cin >> answer;

    if(answer == "promise"){
        cout << "You found the correct answer!! eureka!\n\n";
        cout << "POV: < Whoaaa, the symbol glows... *HEAVY NOISE...* >\n\n";
        cout << "A hidden door opens.";
    }
    else{
        cout << "Incorrect!!, the symbol remains dark\n\n";
        cout << "POV: < Oh no, nothing happens, I have to find the answer.>";
    }
}
void descRightRoom(){
    cout << "You entered a room filled with dusty old books. There's a faint scent of parchment in the air.\n";
}