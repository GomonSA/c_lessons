#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool guesses(int secretNumber, int guessLimit);

int main()
{
  
  int secretNumber = 5;        // mystery number
  int guessLimit = 3;          // limit of attempts

  /*required function guesses and assign the result 
   * to variable guess*/
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

  /****
   *********************************************
   * Function  : guesses (int secretNumber), int (guessLimit)
   * Input     : none
   * Output    : bool
   * Procedure : return true and false if don't guess number.
   ****
   *********************************************/

  int guess = 0;
  int guessCount = 0;
  int outOfGuesses = 0;


  /* The cycle continues until those guessing number or limit
   * is reached.*/
  while(guess != secretNumber && outOfGuesses == 0) {
    if (guessCount < guessLimit) {
        printf("Enter a number: ");
        scanf("%d", &guess);
        guessCount++;
    } else {
      outOfGuesses = 1;
    }
  } 

  // if guess return true else false.
  if (outOfGuesses == 1) {
    return false;
  } else {
    return true;
  }
}
