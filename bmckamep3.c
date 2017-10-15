/* --------------------------------------------------------------------------

Program file:   bmckamep3.c
Author:         Buddy Mckamey
Date:           October 14, 2017
Assignment:     #3
Objective:      Program decision making assignment that takes in multiple
                grades via user input and calculates the average grade overall

---------------------------------------------------------------------------*/

#include <stdio.h>

int main(void)
{

     /* Declaration of variables */
     /*--------------------------*/

     int   counter, numberOfGrades, gradesAverage, grade, gradesTotal = 0;

     /* Display the welcome message stating what this program does */
     /* ---------------------------------------------------------- */

     printf("This program calculates the average of as many grades you wish ");
     printf("to enter.\n\n");

     /* Begin user input for loop */
     /* ------------------------- */

     printf("First, enter the number of grades to process: ", );
     scanf("%i", &numberOfGrades);
     printf("Now enter the %i grades to be averaged.\n\n", numberOfGrades);

     /* Begin loop */
     /* ---------- */

     for (counter = 1, counter <= numberOfGrades; counter++)
     {

          /* Request input of miles and gallons, then    */
          /* calculate and display the miles per gallon  */
          /* ------------------------------------------- */

          printf("Enter grade #%i: ", counter);
          scanf("%i", &grade);

          if (grade < 0)
          {

               printf("*** Invalid entry. Grade must be 0 to 100. ***\n");
               counter -= 1;

          }
          else
          {

               gradesTotal += grade;

          }

     } /* End loop */

     gradesAverage = gradesTotal / numberOfGrades;

     /* Display the overall miles per gallon for all three tanks */
     /* -------------------------------------------------------- */

     printf("The average of the %i grades entered is %i\n\n", numberOfGrades,
     gradesAverage);

     if (gradesAverage >= 90 && gradesAverage <= 100)
     {
          printf("You have a letter grade of A");
     }
     if (gradesAverage >= 80 && gradesAverage <= 89)
     {
          printf("You have a letter grade of B");
     }
     if (gradesAverage >= 70 && gradesAverage <= 79)
     {
          printf("You have a letter grade of C");
     }
     if (gradesAverage >= 60 && gradesAverage <= 69)
     {
          printf("You have a letter grade of D");
     }
     if (gradesAverage >= 0 && gradesAverage <= 59)
     {
          printf("You have a letter grade of F");
     }

     /* Pause the output after compiling and end execution of main */
     /* ---------------------------------------------------------- */

     getchar();

     return 0;

} /* End main */
