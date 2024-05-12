/*
Project 0a
*/

/*
Exercise 4 - build a C to F converter. F = C × 1.8 + 32. Use scanf("<type>",
&<variable>) to accept input from keyboard.
*/

#include <stdio.h>

int main() {
  // NOTE: Already made exercise 1 with scanf() input
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