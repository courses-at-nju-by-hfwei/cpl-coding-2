//
// Created by hengxin on 9/27/21.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int high = 100;
  int number_of_tries = 7;

  /**
   * (1) print the rules of the game
   * %d: d, decimal
   */
  printf("Let us play the \"Guess the Number\" game.\n"
         "The computer will generate a random number (r) between 1 and %d.\n"
         "You have %d tries.\n", high, number_of_tries);

  /**
   * (2) generate a random number (name: r)
   * between 1 and high
   */
  // stdlib.h: standard library
  srand(time(NULL));
  int r = rand() % high + 1;
  printf("r = %d.\n", r);

  // rand(): 0 .. RAND_MAX
  int random = rand();
  printf("random = %d; RAND_MAX = %d. \n", random, RAND_MAX);
  /**
   * (3) ask the player to input a guess (name: guess)
   */
  while(number_of_tries > 0) {
    // number_of_tires--: number_of_tries = number_of_tries - 1
    printf("You still have %d tries.\n", number_of_tries);
    number_of_tries--;

    printf("Please input your guess.\n");

    /**
     * (4) get the guessed number,
     * compare guess with r,
     * and inform the player of the result
     */
    int guess;
    scanf("%d", &guess);

    // compare x and y: x == y
    // it is not x = y
    if (guess == r) {
      printf("Congs! You win! \n");
      break;
    } else if (guess > r) {
      printf("guess > r.\n");
    } else { // guess < r
      printf("guess < r.\n");
    }
  }

  /**
   * (5) repeat (3)-(4) until the player wins or loses
   * while number_of_tires > 0
   */

  return 0;
}

