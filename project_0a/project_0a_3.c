/*
Project 0a
*/

/*
Exercise 3 - build a C to F converter. F = C × 1.8 + 32 that goes from 0 to 100 C, 1 by 1.
*/

#include <stdio.h>

int main() {
  // Convert C to F
  // F = C × 1.8 + 32

  int celsius = 0;

  printf("\nCelsius to Fahrenheit convertion table\n");
  
  while (celsius <= 100) {
    // Calculating
    float fahrenheit = celsius * 1.8 + 32;
    printf("%dC ---> %fF\n", celsius, fahrenheit);
    celsius = celsius + 1;
  }

  return 0;
}
