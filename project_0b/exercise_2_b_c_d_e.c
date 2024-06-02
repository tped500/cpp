/*
Project 0b
*/

/*
Exercise 2 b - Rewrite project_0a exercise 1, but allow to choose which scale to
convert to and (Exercise 2 c) checks that the lowest temperature it can get to
is -273.15C/-459.67F. (exercise 2 d) Keep asking for a new value to convert at
the end of converting until (exercise 2 e) the user types "E" to stop the
program.

F = C × 1.8 + 32
C = (32 - F)/1.8
*/

#include <ctype.h>
#include <stdio.h>

int temperature_converter(double temperature, char scale) {
  double converted_temp;

  double min_c = -273.15;
  double min_f = -459.67;

  if (scale == 'C' && temperature < min_c) {
    printf("\n\nThere are no temperatures lower than %lfC.\n", min_c);
    return 1;
  } else if (scale == 'F' && temperature < min_f) {
    printf("\n\nThere are no temperatures lower than %lfF.\n", min_f);
    return 1;
  } else if (temperature == 'e') {
    printf("\n\nThank you for using temperature converter.\n");
    return 0;
  }

  if (scale == 'C') {
    printf("\n-> Converting %.2lfF to C\n", temperature);
    converted_temp = (32 - temperature) / 1.8;
    printf("---> %.2lfF is equivalent to %.2lfC\n", temperature,
           converted_temp);
  } else {
    printf("\n-> Converting %.2lfC to F\n", temperature);
    converted_temp = temperature * 1.8  + 32;
    printf("---> %.2lfC is equivalent to %.2lfF\n", temperature,
           converted_temp);
  }
  return 1;
}

int main() {
  char scale;

  while (1) {
    printf(
        "\nWhich scale do you want to convert to? Please input one of the "
        "following:\n(F) - converts from C to F\n(C) - converts from F to "
        "C\nIf you wish to stop, type 'E'.\n: ");
    scanf(" %c", &scale);

    if (toupper(scale) != 'C' && toupper(scale) != 'F' &&
        toupper(scale) != 'E' && toupper(scale) != '\n') {
      printf("\n\nSorry, but only C or F are accepted. Please try again.\n");
      continue;
    }

    if (toupper(scale) == 'E') {
      printf("\n\nThank you for using temperature converter.\n");
      break;
    } else {
      double temp_to_convert;

      printf("\nHow many degrees do you want to convert? ");
      scanf("%lf", &temp_to_convert);

      if (!temperature_converter(temp_to_convert, toupper(scale))) {
        break;
      }
    }
  }

  return 0;
}