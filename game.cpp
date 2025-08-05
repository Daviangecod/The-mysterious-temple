#include <iostream>
#include <string>
#include "game.hpp"
#include <chrono>
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

  //initial score of player
  int score = 0;

void descLeftRoom(){
    cout << "You entered a room filled with ancient artifacts. There's mysterious symbol drawn on the wall.\n\n";
    cout << "POV : < I need to know what that symbol is! >\n";
    cout << "The symbol seems to be a riddle:\n\n 'What can be broken but never held?'\n";
    cout << "You have 30s to solve the riddle.";
 
     //calculates the time it takes to answer the riddle and the number of chances
    int attempts = 0;
    bool solved = false;
    auto startTime = chrono::high_resolution_clock::now();

    while(attempts < 3 && !solved){
        cout << "What is your answer?\n";
        string answer;
        cin >> answer;

        auto endTime = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::seconds>(endTime - startTime).count();
        attempts++;
        
        if(duration > 30){
            cout << "Time's up you took too long to answer.\n";
            score -= 5;
            cout << "You lost 5 points.\n";
            break;
        }

    if(answer == "promise"){
        cout << "You found the correct answer!! eureka!\n\n";
        cout << "POV: < Whoaaa, the symbol glows... *HEAVY NOISE...* >\n\n";
        cout << "A hidden door opens.";
        
        score += 10;
        cout << "You earned 10 points\n";
        solved = true;
    }
    else{
        cout << "Incorrect!!, you have " << 3 - attempts << " attempts remaining\n";
        score -= 2;
        cout << "You lost 2 points.\n";
        cout << "POV: < Oh no, nothing happens, I have to find the answer.>\n";
    }
 }
   if(!solved && attempts == 3){
    cout << "You've used up all your attempts sorry. the symbol remains dark\n";
    cout << "You need to find another way to progress\n";
    cout << "POV: < Alright it's not a big deal all i have to do is find another way out of this room. >"
   }
}
void descRightRoom(){
    cout << "You entered a room filled with dusty old books. There's a faint scent of parchment in the air.\n";
}