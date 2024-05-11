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