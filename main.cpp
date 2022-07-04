#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h> /* time */

using namespace std;

int main (){
//roll of dice
//or number guesser

int secretNum, guess;

/* initialize random seed: */
srand (time(NULL));

/* generate secret number between 1 and 10: */
secretNum = rand() % 10 + 1;

for(int x = 0; x < 10; x++){
  cout << "Please enter your guess" << endl;
  cin >> guess;
  if (guess == secretNum){
    cout << "You win!"<< endl;
    return 0;
  }
  else{
    cout << "Guess again" << endl;
  }
}
//ask the user for their guess
// if guess equal secretNum then output you win!
// otherwise, output guess again
}