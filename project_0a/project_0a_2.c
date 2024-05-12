/*
Project 0a
*/

/*
Exercise 2 - build a multiplication table for a given number
*/

#include <stdio.h>

int main() {

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