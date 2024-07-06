/*
Create a program that reads the file from exercise 1 and prints its content on
the screen.
*/

#include <stdio.h>

int main() {
  char filename[100];
  printf("\nName of file to open:\n");
  scanf("%s", filename);

  FILE *file_read = fopen(filename, "r");

  printf("\nContents of %s:\n", filename);
  char line[20];
  while (fgets(line, sizeof(line), file_read)) {
    printf("%s", line);
  }

  fclose(file_read);
  return 0;
}