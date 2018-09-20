#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool guesses(int secretNumber, int guessLimit);


int main()
{
  int secretNumber = 5;
  int guessLimit = 3;
  bool guess = guesses(secretNumber, guessLimit);

  if (guess == false) {
    printf("Out of guesses... ;( ");
  } else if (guess == true){
    printf("********************************\n");
    printf("***      You Win!!! :)       ***\n");
    printf("********************************\n");
  } else {
    printf("Invalid operation...");
  }




  return 0;
}


bool guesses(int secretNumber, int guessLimit) {

  int guess = 0;
  int guessCount = 0;
  int outOfGuesses = 0;

  while(guess != secretNumber && outOfGuesses == 0) {
    if (guessCount < guessLimit) {
        printf("Enter a number: ");
        scanf("%d", &guess);
        guessCount++;
    } else {
      outOfGuesses = 1;
    }
  }

  if (outOfGuesses == 1) {
    return false;
  } else {
    return true;
  }
}
