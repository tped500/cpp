/*
Project 0a
*/

/*
Exercise 5 - build a multiplication table for a given number. Use scanf() to
read input from keyboard. Limit previous implementation (exercise 5) to not
allow negative values nor positive higher than 50

Note: if statement is represented as:
if (confition) {code for true condition} else {code for false condition}
The else bit is optional
*/

#include <stdio.h>

int main() {
  int number, factor, calculation;

  printf(
      "\nFor which number would you like to see the multiplication table?\n");
  scanf("%d", &number);

  if (number < 0 || number > 50) {
    printf(
        "Sorry, no negative or numbers bigger than 50 are allowed. Please try "
        "again.\n");
  } else {
    printf("\nMultiplication table for %d\n", number);

    factor = 0;
    while (factor <= 10) {
      calculation = number * factor;
      printf("%d x %d = %d\n", number, factor, calculation);
      factor = factor + 1;
    }
  }

  return 0;
}