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

     int   numberOfDeposits, numberOfWithdrawals, z, grade;
     float currentBalance, deposits[6] = {0, 0, 0, 0, 0, 0},
     withdrawals[6] = {0, 0, 0, 0, 0, 0};

     /* Display the welcome message stating what this program does */
     /* ---------------------------------------------------------- */

     printf("Welcome to the Computer Banking System\n\n");

     /* Begin user input for bank balance, deposits, and withdrawals */
     /* ------------------------------------------------------------ */

     printf("Enter your current balance in dollars and cents: ");
     scanf("%f", &currentBalance);
     printf("\n\n");
     printf("Enter the number of deposits (0 - 5): ");
     scanf("%i", &numberOfDeposits);
     printf("\n\n");
     printf("Enter the number of withdrawals (0 - 5): ");
     scanf("%i", &numberOfWithdrawals);
     printf("\n\n");


     /* Begin loop */
     /* ---------- */

     for (z = 1; z < numberOfDeposits; z++)
     {

          /* Request input of grade, then validate it is not a negative  */
          /* number. If its valid, proceed to adding to total            */
          /* ----------------------------------------------------------- */

          printf("Enter the amount of deposit #%i: ", z);
          scanf("%f", deposits[z]);
          printf("\n");

          if (deposits[z] < 0)
          {

               printf("*** Deposit amount must be greater than zero, ");
               printf("please re-enter.\n");

               z -= 1;

          } /* End if statement */

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
