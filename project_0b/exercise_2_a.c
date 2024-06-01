/*
Project 0b
*/

/*
Exercise 2 - Rewrite project_0a exercise 1, but make it read Celsius from input
and display both input and converted values.

F = C × 1.8 + 32
*/

#include <stdio.h>

int main() {
  double celsius;
  printf("How many Celsius do you want to convert? ");
  scanf("%lf", &celsius);

  printf("Converting %.2lf Celsius to Fahrenheit\n", celsius);
  const fahrenheit = celsius * 1.8 + 32;
  printf("%.2lfC is equivalent to %.2lfF\n", celsius, fahrenheit);

  return 0;
}