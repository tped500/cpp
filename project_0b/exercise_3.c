/*
Project 0b
*/

/*
Exercise 3 a - According to Malthus Law: x(n+1) = µ x(n), defined within [0, 1]
for both µ and x.

Write a program that reads user input for x0 and µ, and shows the first 20
iterations of the equation.

Exercise 3 b - Add an option for the user to define the total number of
iterations.
*/

#include <math.h>
#include <stdio.h>

int malthus_law_calculator(double x_initial, double growth_rate, int interations) {
  double instant_growth = x_initial;
  printf("\nx0 = %.2lf | µ = %.2lf\n", x_initial, growth_rate);
  for (int counter = 0; counter < interations; counter++) {
    printf("Iteration %2d: x = %.2lf\n", counter, instant_growth);
    instant_growth = growth_rate * instant_growth;
  }

  return 1;
}

int main() {
  printf("\nMalthus Law calculator\n");
  printf("Please input the initial, x0, value: ");
  double x_initial;
  scanf("%lf", &x_initial);
  printf("Please input growth rate, µ, value: ");
  double growth_rate;
  scanf("%lf", &growth_rate);
  printf("How many iterations should the program run?: ");
  int interations;
  scanf("%d", &interations);

  malthus_law_calculator(x_initial, growth_rate, interations);

  return 0;
}