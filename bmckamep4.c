/* --------------------------------------------------------------------------

Program file:   bmckamep4.c
Author:         Buddy Mckamey
Date:           October 28, 2017
Assignment:     #4
Objective:      Program array assignment that performs simple banking
                transactions

---------------------------------------------------------------------------*/

#include <stdio.h>

int main(void)
{

     /* Declaration of variables */
     /*--------------------------*/

     int   counter, numberOfGrades, grade;
     float gradesAverage, gradesTotal = 0;

     /* Display the welcome message stating what this program does */
     /* ---------------------------------------------------------- */

     printf("This program calculates the average of as many grades you wish ");
     printf("to enter.\n\n");

     /* Begin user input for number of grades */
     /* ------------------------------------- */

     printf("First, enter the number of grades to process: ");
     scanf("%i", &numberOfGrades);
     printf("\n");
     printf("Now enter the %i grades to be averaged.\n\n", numberOfGrades);

     /* Begin loop */
     /* ---------- */

     for (counter = 1; counter <= numberOfGrades; counter++)
     {

          /* Request input of grade, then validate it is not a negative  */
          /* number. If its valid, proceed to adding to total            */
          /* ----------------------------------------------------------- */

          printf("Enter grade #%i: ", counter);
          scanf("%i", &grade);

          if (grade < 0)
          {

               printf("*** Invalid entry. Grade must be 0 to 100. ***\n");
               counter -= 1;

          } /* End if statement */
          else
          {

               gradesTotal += grade;

          } /* End else statement */

     } /* End loop */

     /* Calculate the grade average */
     /* --------------------------- */

     gradesAverage = gradesTotal / numberOfGrades;

     /* Display the overall grade average and letter grade associated */
     /* ------------------------------------------------------------- */

     printf("\n");
     printf("The average of the %i grades entered is %.0f\n\n", numberOfGrades,
     gradesAverage);

      /* Begin if statements for displaying the appropriate letter grade */
      /* --------------------------------------------------------------- */

     if (gradesAverage >= 90 && gradesAverage <= 100)
     {
          printf("You have a letter grade of A\n\n");
     } /* End if statement for grade A */
     if (gradesAverage >= 80 && gradesAverage <= 89)
     {
          printf("You have a letter grade of B\n\n");
     } /* End if statement for grade B */
     if (gradesAverage >= 70 && gradesAverage <= 79)
     {
          printf("You have a letter grade of C\n\n");
     } /* End if statement for grade C */
     if (gradesAverage >= 60 && gradesAverage <= 69)
     {
          printf("You have a letter grade of D\n\n");
     } /* End if statement for grade D */
     if (gradesAverage >= 0 && gradesAverage <= 59)
     {
          printf("You have a letter grade of F\n\n");
     } /* End if statement for grade F */

     /* Pause the output after compiling and end execution of main */
     /* ---------------------------------------------------------- */

     getchar();

     return 0;

} /* End main */
