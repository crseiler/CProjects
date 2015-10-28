/* Preprocessor  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DICERANGE 6
#define ROLLTIMES 100

/* prototype */
void rollDice(int *dice1, int *dice2);
void addDice(int *sum, int *dice1, int *dice2);
void printHistogram(int values[]);

/* Definition of main */
int main()
{
 int dice1, dice2, sum, increment, test;
 int values[13] = {0};

for( increment = 0 ; increment < ROLLTIMES ; increment++ ) 
 {
 rollDice(&dice1, &dice2);
 printf("%d %d\n+++++++++\n", dice1, dice2);
 addDice(&sum, &dice1, &dice2);
 printf("%d\n", sum);
switch (sum) 
     {
         case 1: values[1]++; 
         break;
         case 2: values[2]++; 
         break;
         case 3: values[3]++; 
         break;
         case 4: values[4]++; 
         break;
         case 5: values[5]++; 
         break;
         case 6: values[6]++; 
         break;
         case 7: values[7]++; 
         break;
         case 8: values[8]++; 
         break;
         case 9: values[9]++; 
         break;
         case 10: values[10]++; 
         break;
         case 11: values[11]++; 
         break;
         case 12: values[12]++; 
         break;
      }
      }
printHistogram(values);
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

/* Definition of printHistogram */
void printHistogram(int values[])
{
int i, x;
printf("Sum of Dice Roll \n--------------------\n");
for(i=2; i<=12;i++)
{
printf("%d:\t%d", i, values[i]);
for(x=values[i];x>0;x--)
{
printf("*");
}
printf("\n");
}

}

/* Definition of dicePercentage */

/* Definition of expectedValue */

/* Definition of diffValue */
