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

void temperature_converter(double temperature, char target_scale) {
  if (target_scale == 'C') {
    printf("\n-> Converting %.2lfF to C\n", temperature);
    const double converted_temp = (32 - temperature) / 1.8;
    printf("---> %.2lfF is equivalent to %.2lfC\n", temperature,
           converted_temp);
  } else {
    printf("\n-> Converting %.2lfC to F\n", temperature);
    const double converted_temp = temperature * 1.8 + 32;
    printf("---> %.2lfC is equivalent to %.2lfF\n", temperature,
           converted_temp);
  }
}

int main() {
  while (1) {
    printf(
        "\nWhich scale do you want to convert to? Please input one of the "
        "following:\n(F) - converts from C to F\n(C) - converts from F to "
        "C\nIf you wish to stop, type 'E'.\n: ");
    char target_scale;
    scanf(" %c", &target_scale);
    target_scale = toupper(target_scale);

    if (target_scale != 'C' && target_scale != 'F' && target_scale != 'E') {
      printf("\n\nSorry, but only C or F are accepted. Please try again.\n");
      continue;
    }

    if (target_scale == 'E') {
      printf("\n\nThank you for using temperature converter.\n");
      break;

    } else {
      double temp_to_convert;

      printf("\nHow many degrees do you want to convert? ");
      scanf("%lf", &temp_to_convert);

      const double min_celsius = -273.15;
      const double min_fahrenheit = -459.67;

      if (target_scale == 'F' && temp_to_convert < min_celsius) {
        printf("\n\nThere are no temperatures lower than %.2lfC.\n", min_celsius);
        continue;
      } else if (target_scale == 'C' && temp_to_convert < min_fahrenheit) {
        printf("\n\nThere are no temperatures lower than %.2lfF.\n", min_fahrenheit);
        continue;
      } else if (toupper(temp_to_convert) == 'E') {
        printf("\n\nThank you for using temperature converter.\n");
        break;
      } else {
        temperature_converter(temp_to_convert, target_scale);
      }
    }
  }

  return 0;
}