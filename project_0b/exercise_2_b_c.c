/*
Project 0b
*/

/*
Exercise 2 b - Rewrite project_0a exercise 1, but allow to choose which scale to
convert to and checks that the lowest temperature it can get to is -273.15C/-459.67F.

F = C × 1.8 + 32
C = (32 - F)/1.8
*/

#include <stdio.h>
#include <ctype.h>

int temperature_converter(double temperature, char scale) {
  double converted_temp;

  if (scale == 'C') {
    printf("Converting %.2lfF to C\n", temperature);
    converted_temp = (32 - temperature) / 1.8;
    printf("%.2lfF is equivalent to %.2lfC\n", temperature, converted_temp);
  } else {
    printf("Converting %.2lfC to F\n", temperature);
    converted_temp = temperature * 1.8 + 32;
    printf("%.2lfC is equivalent to %.2lfF\n", temperature, converted_temp);
  }
  return 0;
}

int main() {
  double temp_to_convert;
  char scale;
  int valid_input = 1;

  while (valid_input) {
    printf(
        "\nWhich scale do you want to convert to? Please input one of the "
        "following:\n(F) - converts from C to F\n(C) - converts from F to "
        "C\n: ");
    scanf("%c", &scale);

    if (toupper(scale) != 'C' && toupper(scale) != 'F') {
        printf("\n\nSorry, but only C or F are accepted. Please try again.\n");
        continue;
    }

    printf("\nHow many degrees do you want to convert? ");
    scanf("%lf", &temp_to_convert);

    double min_c = -273.15;
    double min_f = -459.67;

    if (scale == 'C' && temp_to_convert < min_c) {
        printf("\n\nThere are no temperatures lower than %lfC.\n", min_c);
        continue;
    } else if (scale == 'F' && temp_to_convert < min_f) {
        printf("\n\nThere are no temperatures lower than %lfF.\n", min_f);
        continue;
    }

    valid_input = temperature_converter(temp_to_convert, toupper(scale));
  }

  return 0;
}