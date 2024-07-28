#include <stdio.h>

int main() {
    int fahr;

    printf("FAHR   CELSIUS\n");
    printf("---------------\n");
    /*
    The format specifier %4d is used to print the Fahrenheit temperature as a 4-digit integer, 
    and %6.1f is used to print the Celsius temperature as a floating-point number with one decimal place.
    */
    for (fahr = 0; fahr <= 300; fahr = fahr + 40)
        printf("%4d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

    return 0;
}

/*
K&R Exercise 1-3. Modify the temperature conversion program to print a heading
above the table. Check the sample output for the required format of the heading.

FAHR   CELSIUS
---------------
   0  -17.8
  40    4.4
  80   26.7
 120   48.9
 160   71.1
 200   93.3
 240  115.6
 280  137.8
*/