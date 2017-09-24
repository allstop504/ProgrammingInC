/* --------------------------------------------------------------------------

Program file:   bmckamep1.c
Author:         Buddy Mckamey
Date:           September 21, 2017
Assignment:     #1
Objective:      Calculates and prints the sum, difference, product, quotient,
                and remainder of two integer numbers

---------------------------------------------------------------------------*/

#include <stdio.h>

int main(void)
{
     /* Declaration of variables */
     /*--------------------------*/

     int num1 = 54, num2 = 17;

     /* Display the sum, difference, product, and */
     /* quotient of the two numbers 54 and 18     */
     /* ----------------------------------------- */

     printf("The two numbers used by this program are %i and %i\n\n", num1,
     num2);
     printf("The sum of %i and %i is %i\n", num1, num2, num1 + num2);
     printf("The difference of %i and %i is %i\n", num1, num2, num1 - num2);
     printf("The product of %i and %i is %i\n", num1, num2, num1 * num2);
     printf("The quotient of %i and %i is %i with a remainder of %i\n\n",
     num1, num2, num1 / num2, num1 % num2);
     printf("Thank you for using the program\n");

     /* Pause the output after compiling and end program */

     getchar();

     return 0;

} /* End the main */
