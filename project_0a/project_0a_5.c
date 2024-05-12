/*
Project 0a
*/

/*
Exercise 5 - build a multiplication table for a given number. Use scanf() to
read input from keyboard
*/

#include <stdio.h>

int main() {
  // Already answered this on question 2

  int number;

  printf("\nFor which number would you like to see the multiplication table?\n");
  scanf("%d", &number);

  printf("\nMultiplication table for %d\n", number);
  
  int factor = 0;
  while (factor <= 10) {
    int calculation = number * factor;
    printf("%d x %d = %d\n", number, factor, calculation);
    factor = factor + 1;
  }

  return 0;
}