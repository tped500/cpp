/*
Project 0a
*/

/*
Exercises 1 and 4 - build a C to F converter. F = C × 1.8 + 32
*/

#include <stdio.h>

int main() {
  // Convert C to F
  // F = C × 1.8 + 32

  printf("\n");
  printf("\nCelsius to Fahrenheit converter\n");

  printf("How many Celsius do you want to convert?\n");
  int celsius;
  scanf("%d", &celsius);

  printf("Converting %d Celsius to Fahrenheit\n", celsius);

  float fahrenheit = celsius * 1.8 + 32;

  printf("%dC ---> %fF\n", celsius, fahrenheit);

  return 0;
}