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

     int   numberOfDeposits, numberOfWithdrawals, y, z;
     float currentBalance = 0.0, startingBalance = 0.0;
     float deposits[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };
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

          if (currentBalance < 0)
          {

               printf("*** Beginning balance must be at least zero, ");
               printf("please re-enter.\n\n");

               z -= 1;

          } /* End if statement */

     } /* End loop */

     printf("\n");

     startingBalance += currentBalance;

     /* Begin number of deposits loop */
     /* ----------------------------- */

     printf("Enter the number of deposits (0 - 5): ");
     scanf("%i", &numberOfDeposits);

     if (numberOfDeposits < 0 || numberOfDeposits > 5)
     {

          printf("*** Invalid number of deposits, ");
          printf("please re-enter.\n");

          y = 1;

     } /* End if statement */

     if (y == 1)
     {

          for (z = 0; z < 1; z++)
          {

               /* Request input */
               /* ------------- */

               printf("Enter the number of deposits: ");
               scanf("%i", &numberOfDeposits);

               if (numberOfDeposits < 0 || numberOfDeposits > 5)
               {

                    printf("*** Invalid number of deposits, ");
                    printf("please re-enter.\n");

                    z -= 1;
               } /* End if statement */

          } /* End loop */

     } /* End if statement */

     printf("\n");

     /* Begin number of withdrawals */
     /* --------------------------- */

     for (z = 0; z < 1; z++)
     {

          /* Request input */
          /* ------------- */

          printf("Enter the number of withdrawals (0 - 5): ");
          scanf("%i", &numberOfWithdrawals);

          if (numberOfWithdrawals < 0 || numberOfWithdrawals > 5)
          {

               printf("*** Invalid number of withdrawals, ");
               printf("please re-enter.\n");

               z -= 1;

          } /* End if statement */

     } /* End loop */

     printf("\n");

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

          } /* End else statement */

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

          } /* End else statement */

     } /* End loop */

     printf("\n");

     /* Begin displaying of closing balance */
     /* ----------------------------------- */

     printf("*** The closing balance is $%.2f ***\n", currentBalance);

     if (currentBalance >= 50000.00)
     {
          printf("*** It is time to invest some money! ***\n\n");
     } /* End if statement */
     if (currentBalance <= 49999.99 && currentBalance >= 15000.00)
     {
          printf("*** Maybe you should consider a CD. ***\n\n");
     } /* End if statement */
     if (currentBalance <= 14999.99 && currentBalance >= 1000.00)
     {
          printf("*** Keep up the good work! ***\n\n");
     } /* End if statement */
     if (currentBalance <= 999.99 && currentBalance >= 0.00)
     {
          printf("*** Your balance is getting low! ***\n\n");
     } /* End if statement */

     /* Begin Bank Record display */
     /* ------------------------- */

     printf("*** Bank Record ***\n\n");

     /* Display Starting Balance */
     /* ------------------------ */

     if (startingBalance >= 0.00 && startingBalance <= 9.99)
     {
          printf("Starting Balance:     $ %.2f\n", startingBalance);
     } /* End if statement */
     if (startingBalance >= 10.00 && startingBalance <= 99.99)
     {
          printf("Starting Balance:    $ %.2f\n", startingBalance);
     } /* End if statement */
     if (startingBalance >= 100.00 && startingBalance <= 999.99)
     {
          printf("Starting Balance:   $ %.2f\n", startingBalance);
     } /* End if statement */
     if (startingBalance >= 1000.00 && startingBalance <= 9999.99)
     {
          printf("Starting Balance:  $ %.2f\n", startingBalance);
     } /* End if statement */
     if (startingBalance >= 10000.00 && startingBalance <= 99999.99)
     {
          printf("Starting Balance: $ %.2f\n", startingBalance);
     } /* End if statement */

     /* Begin display deposits */
     /* ---------------------- */

     for (z = 1; z < numberOfDeposits + 1; z++)
     {

          /* Request input */
          /* ------------- */

          if (deposits[z] > 0.00 && deposits[z] <= 9.99)
          {

               printf("Deposit #%i:             %.2f\n", z, deposits[z]);

          } /* End if statement */

          if (deposits[z] > 10.00 && deposits[z] <= 99.99)
          {

               printf("Deposit #%i:            %.2f\n", z, deposits[z]);

          } /* End if statement */

          if (deposits[z] >=100.00 && deposits[z] <= 999.99)
          {

               printf("Deposit #%i:           %.2f\n", z, deposits[z]);

          } /* End if statement */

          if (deposits[z] >= 1000.00 && deposits[z] <= 9999.99)
          {

               printf("Deposit #%i:          %.2f\n", z, deposits[z]);

          } /* End if statement */

          if (deposits[z] >= 10000.00 && deposits[z] <= 99999.99)
          {

               printf("Deposit #%i:         %.2f\n", z, deposits[z]);

          } /* End if statement */

     } /* End loop */

     /* Begin display withdrawals */
     /* ------------------------- */

     printf("\n");

     for (z = 1; z < numberOfWithdrawals + 1; z++)
     {

          /* Request input */
          /* ------------- */

          if (withdrawals[z] >= 0.00 && withdrawals[z] <= 9.99)
          {

               printf("Withdrawal #%i:          %.2f\n", z, withdrawals[z]);

          } /* End if statement */

          if (withdrawals[z] >= 10.00 && withdrawals[z] <= 99.99)
          {

               printf("Withdrawal #%i:         %.2f\n", z, withdrawals[z]);

          } /* End if statement */

          if (withdrawals[z] >=100.00 && withdrawals[z] <= 999.99)
          {

               printf("Withdrawal #%i:        %.2f\n", z, withdrawals[z]);

          } /* End if statement */

          if (withdrawals[z] >= 1000.00 && withdrawals[z] <= 9999.99)
          {

               printf("Withdrawal #%i:       %.2f\n", z, withdrawals[z]);

          } /* End if statement */

          if (withdrawals[z] >= 10000.00 && withdrawals[z] <= 99999.99)
          {

               printf("Withdrawal #%i:      %.2f\n", z, withdrawals[z]);

          } /* End if statement */

     } /* End loop */

     printf("\n");

     /* Begin display current balance */
     /* ----------------------------- */

     if (currentBalance >= 0.00 && currentBalance <= 9.99)
     {
          printf("Ending Balance:       $ %.2f\n", currentBalance);
     } /* End if statement */
     if (currentBalance >= 10.00 && currentBalance <= 99.99)
     {
          printf("Ending Balance:      $ %.2f\n", currentBalance);
     } /* End if statement */
     if (currentBalance >= 100.00 && currentBalance <= 999.99)
     {
          printf("Ending Balance:     $ %.2f\n", currentBalance);
     } /* End if statement */
     if (currentBalance >= 1000.00 && currentBalance <= 9999.99)
     {
          printf("Ending Balance:    $ %.2f\n", currentBalance);
     } /* End if statement */
     if (currentBalance >= 10000.00 && currentBalance <= 99999.99)
     {
          printf("Ending Balance:   $ %.2f\n", currentBalance);
     } /* End if statement */


     /* Pause the output after compiling and end execution of main */
     /* ---------------------------------------------------------- */

     getchar();

     return 0;

} /* End main */
