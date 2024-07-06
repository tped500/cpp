/*
Remake exercise 5 from Project 0a and print values on screen and save them to a file.
*/


#include <stdio.h>

int main() {

  int number;
  printf("\nFor which number would you like to see the multiplication table?\n");
  scanf("%d", &number);

  char filename[100];
  printf("\nWrite an output file name:\n");
  scanf("%s", filename);

  FILE *file_in = fopen(filename, "wt");

  printf("\nMultiplication table for %d\n", number);
  
  int factor = 0;
  while (factor <= 10) {
    int calculation = number * factor;
    printf("%d x %d = %d\n", number, factor, calculation);
    fprintf(file_in, "%d x %d = %d\n", number, factor, calculation);
    factor = factor + 1;
  }

  printf("Wrote file: %s\n", filename);

  return 0;
}