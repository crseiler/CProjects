/* Preprocessor  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DICERANGE 6
#define ROLLTIMES 100

/* prototype */
void rollDice(int *dice1, int *dice2);
void addDice(int *sum, int *dice1, int *dice2);

/* Definition of main */
int main()
{
 int dice1, dice2, sum, increment, test;
 int dp1 = 0, dp2 = 0, dp3 = 0, dp4 = 0,
    dp5 = 0, dp6 = 0, dp7 = 0, dp8 = 0, 
    dp9 = 0, dp10 = 0, dp11 = 0, dp12 = 0;

for( increment = 0 ; increment < ROLLTIMES ; increment++ ) 
 {
 rollDice(&dice1, &dice2);
 printf("%d %d\n+++++++++\n", dice1, dice2);
 addDice(&sum, &dice1, &dice2);
 printf("%d\n", sum);
switch (sum) 
     {
         case 1: dp1++; 
         break;
         case 2: dp2++; 
         break;
         case 3: dp3++; 
         break;
         case 4: dp4++; 
         break;
         case 5: dp5++; 
         break;
         case 6: dp6++; 
         break;
         case 7: dp7++; 
         break;
         case 8: dp8++; 
         break;
         case 9: dp9++; 
         break;
         case 10: dp10++; 
         break;
         case 11: dp11++; 
         break;
         case 12: dp12++; 
         break;
      }
      }
printf("Sum of Dice Roll \n--------------------\n");
printf("01:\t%d\n", dp1);
printf("02:\t%d\n", dp2);
printf("03:\t%d\n", dp3);
printf("04:\t%d\n", dp4);
printf("05:\t%d\n", dp5);
printf("06:\t%d\n", dp6);
printf("07:\t%d\n", dp7);
printf("08:\t%d\n", dp8);
printf("09:\t%d\n", dp9);
printf("10:\t%d\n", dp10);
printf("11:\t%d\n", dp11);
printf("12:\t%d\n", dp12);

}

/* Definition of rollDice */
void rollDice(int *dicevalue1, int *dicevalue2) 
{
  time_t t;
  *dicevalue1= (rand() % DICERANGE) + 1; 
  *dicevalue2= (rand() % DICERANGE) + 1; 
  printf("%p\n", (void*)dicevalue1);
  printf("%p\n", (void*)dicevalue2);
  printf("**************\n");
  
}

/* Definition of addDice  */
void addDice(int *sum, int *dice1, int *dice2)
{
  *sum = *dice1 + *dice2;
  printf("%p\n", (void*)sum);
}

/* Definition of countSums  */
/*for( randIncrement = 0 ; randIncrement < ROLLTIMES ; randIncrement++ ) 
    {
int dp1 = 0, dp2 = 0, dp3 = 0, dp4 = 0,
    dp5 = 0, dp6 = 0, dp7 = 0, dp8 = 0, 
    dp9 = 0, dp10 = 0, dp11 = 0, dp12 = 0;

switch (rollDice) 
     {
         case 1: dp1++; break;
         case 2: dp2++; break;
         case 3: dp3++; break;
         case 4: dp4++; break;
         case 5: dp5++; break;
         case 6: dp6++; break;
         case 7: dp7++; break;
         case 8: dp8++; break;
         case 9: dp9++; break;
         case 10: dp10++; break;
         case 11: dp11++; break;
         case 12: dp12++; break;
      }
    }
}
*/

/* Definition of printHistogram 
char printHistogram()
{
printf("Sum of Dice Roll \n--------------------\n");
printf("01:%d", dp1);
printf("02:%d", dp2);
printf("03:%d", dp3);
printf("01:%4", dp4);
}
*/

/* Definition of dicePercentage */

/* Definition of expectedValue */

/* Definition of diffValue */
