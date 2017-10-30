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

     int   numberOfDeposits, numberOfWithdrawals, z;
     float currentBalance = 0.0, deposits[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };
     float withdrawals[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

     /* Display the welcome message stating what this program does */
     /* ---------------------------------------------------------- */

     printf("Welcome to the Computer Banking System\n\n");

     /* Begin current balance loop */
     /* -------------------------- */

     for (z = 0; z < 1; z++)
     {
          printf("Enter your current balance in dollars and cents: ");
          scanf("%f", &currentBalance);
          printf("\n\n");

          if (currentBalance < 0)
          {

               printf("*** Beginning balance must be at least zero, ");
               printf("please re-enter.\n\n");

               z -= 1;

          } /* End if statement */

     } /* End loop */

     /* Begin number of deposits loop */
     /* ----------------------------- */

     for (z = 0; z < 1; z++)
     {
          printf("Enter the number of deposits (0 - 5): ");
          scanf("%i", &numberOfDeposits);
          printf("\n\n");

          if (numberOfDeposits < 0 || numberOfDeposits > 5)
          {

               printf("*** Invalid number of deposits, ");
               printf("please re-enter.\n\n");

               z -= 1;

          } /* End if statement */

     } /* End loop */

     /* Begin number of withdrawals loop */
     /* -------------------------------- */

     for (z = 0; z < 1; z++)
     {
          printf("Enter the number of withdrawals (0 - 5): ");
          scanf("%i", &numberOfWithdrawals);
          printf("\n\n");

          if (numberOfWithdrawals < 0 || numberOfWithdrawals > 5)
          {

               printf("*** Invalid number of withdrawals, ");
               printf("please re-enter.\n\n");

               z -= 1;

          } /* End if statement */

     } /* End loop */

     /* Begin deposit entry loop */
     /* ------------------------ */

     for (z = 1; z < numberOfDeposits + 1; z++)
     {

          /* Request input */
          /* ------------- */

          printf("Enter the amount of deposit #%i: ", z);
          scanf("%f", &deposits[z]);

          if (deposits[z] < 0)
          {

               printf("*** Deposit amount must be greater than zero, ");
               printf("please re-enter.\n\n");

               z -= 1;

          } /* End if statement */
          else
          {

               currentBalance += deposits[z];

          }

     } /* End loop */

     printf("\n");

     for (z = 1; z < numberOfWithdrawals + 1; z++)
     {

          /* Request input */
          /* ------------- */

          printf("Enter the amount of withdrawal #%i: ", z);
          scanf("%f", &withdrawals[z]);

          if (withdrawals[z] > currentBalance)
          {

               printf("*** Withdrawal amount exceeds current balance. \n\n");

               z -= 1;

          } /* End if statement */
          else
          {

               currentBalance -= withdrawals[z];

          }

     } /* End loop */

     printf("\n");

     printf("*** The closing balance is $%.2f ***\n", currentBalance);

     /* Pause the output after compiling and end execution of main */
     /* ---------------------------------------------------------- */

     getchar();

     return 0;

} /* End main */
