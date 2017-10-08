/* --------------------------------------------------------------------------

Program file:   bmckamep2.c
Author:         Buddy Mckamey
Date:           October 6, 2017
Assignment:     #2
Objective:      Program Looping

---------------------------------------------------------------------------*/

#include <stdio.h>

int main(void)
{
     /* Declaration of variables */
     /*--------------------------*/

     int counter, tank_number;
     float miles_total = 0, miles_input = 0, gallons_total = 0, gallons_input = 0;

     /* */

     printf("Welcome to the mileage calculator\n\n");
     printf("This program will calculate the miles per gallon for you for ");
     printf("three tanks of gas after you have entered the gallons used and ");
     printf("miles driven.\n\n");

     for (counter = 1, tank_number = 1; counter <= 3; counter++, tank_number++)
     {

          printf("Enter the number of gallons used for tank #%i:  ", tank_number);
          scanf("%f", &gallons_input);
          printf("Enter the number of miles driven:  ");
          scanf("%f", &miles_input);
          printf("*** The miles per gallon for this tank is %.1f\n\n",
          miles_input / gallons_input);

          /* */

          miles_total += miles_input;
          gallons_total += gallons_input;

     }

     /* */

     printf("Your overall average miles per gallon for three tanks is %.1f\n\n",
     miles_total / gallons_total);
     printf("Thank you for using the program. Goodbye.\n");

     /* */

     getchar();

     return 0;

} /* End main */
