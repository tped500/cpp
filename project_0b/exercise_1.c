/*
Project 0b
*/

/*
Exercise 1 - Write a program that calcualtes the solutions of the polynomial ax2
+ bx + c = 0

It should prompt to insert the values of a, b, c and x.
Para tal dever´a pedir os valores de a, b e c e seguidamente escrever
correctamente no ecran a equa¸c˜ao pedida, o discriminante e finalmente as suas
solu¸c˜oes da equa¸c˜ao. Nos casos em que haja duas solu¸c˜oes reais diferentes
dever´a escreva-as; quando tiver duas solu¸c˜oes iguais diga qual ´e e indique-a
como raiz dupla; quando as solu¸c˜oes forem imagin´arias diga que s˜ao
imagin´arias e escreva-as na forma p + i q.
*/

#include <math.h>
#include <stdio.h>

void quadratic_function_calculator(double a, double b, double c) {
  double discriminant, first_root;

  discriminant = b * b - 4 * a * c;

  printf("\nDiscriminant: %.2lf\n", discriminant);

  if (discriminant > 0) {
    // Finds two different real roots
    first_root = (-b + sqrt(discriminant)) / (a * 2);
    double second_root = (-b - sqrt(discriminant)) / (a * 2);
    printf("\nFound two different real roots: %.2lf and %.2lf\n", first_root,
           second_root);
  } else if (discriminant == 0) {
    // Finds only one root
    first_root = -b / (a * 2);
    printf("\nFound one real root: %.2lf and %.2lf\n", first_root, first_root);
  } else {
    // Finds two complex roots
    first_root = -b / (a * 2);
    double imaginary = sqrt(-discriminant) / (a * 2);
    printf("\nFound two complex roots: %.2lf ± %.2lfi\n", first_root, imaginary);
  }
}

int main() {
  double a, b, c;

  printf("\nWelcome to the polynomial calculator, ax2 + bx + c = 0 \n");

  printf("\nPlease provide the following values:\n");

  printf("\na: ");

  scanf("%lf", &a);

  printf("\nb: ");

  scanf("%lf", &b);

  printf("\nc: ");

  scanf("%lf", &c);

  quadratic_function_calculator(a = a, b = b, c = c);

  return 0;
}