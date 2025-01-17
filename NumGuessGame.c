// C program for generating a
// random number in a given range.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
  //Create a seed
  srand(time(NULL));

  // Store all needed variables
  int randomNum;
  int userNum;
  int count=0;
  bool keepGoing = true;
  char name[20];

  // Ask the user to type there name
  printf("Please Please Please enter in your name: ");

  // Get and save the name the user types
  scanf("%s", name);

  // Print the name the user typed
  printf("HELLO %s! Welcome to the random guess game, with Sabrina Carpenter as our host today. lets hope that you are the sharpest tool and make this Short n' Sweet\n", name);

  // random number genny
  randomNum = rand() % 101;

  //while loop if TRUE
  while (keepGoing == true) {
	  count++;
	  printf("Turn %d) Please Please Please enter in a number: ", count);
	  scanf("%d", &userNum);
	  if (userNum < randomNum) {
		  printf("Too low\n");
	  }
	  if (userNum > randomNum) {
		  printf("Too high\n");
	  }
	  if (userNum == randomNum) {
		  printf("CORRECT\n");
		  keepGoing = false;
	  }

  }
  if (count < 7) {
	  printf("Great job you can stay in my Good Graces");
  }
  if (count == 7) {
	  printf("You did ok, what a Coincidence");
  }
  if (count > 7) {
	  printf("You truly are not the Sharpest Tool maybe get an Espresso to wake you up");
  }
  return 0;
}

