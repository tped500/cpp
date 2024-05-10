#include <stdio.h>
#include <math.h>

int main()
{
    // while (condition) {body}
    float inch, centimeter;
    inch = 1.;
    while (inch <= 10.1) 
        {
            centimeter = 2.56 * inch;
            printf("%f inches are %f centimeters\n", inch, centimeter);
            inch = inch + 1.;
        }
    return 0;
}