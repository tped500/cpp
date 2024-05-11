/*
Project 0a
*/

/*
Exercise 1 - build a C to F converter. F = C × 1.8 + 32
*/

#include <stdio.h>

int main() {
  // Convert C to F
  // F = C × 1.8 + 32

  float fahrenheit;
  int celsius;

  printf("\n");
  printf("\nCelsius to Fahrenheit converter\n");

  // Getting Celsius to convert
  printf("How many Celsius do you want to convert?\n");
  scanf("%d", &celsius);

  printf("Converting %d Celsius to Fahrenheit\n", celsius);

  // Calculating
  fahrenheit = celsius * 1.8 + 32;

  printf("%d C ---> %f F", celsius, fahrenheit);

  return 0;
}