/* Preprocessor  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DICERANGE 6

/* prototype */
void rollDice(int *dice1, int *dice2);

/* Definition of main */
int main()
{
 int dice1, dice2;
 rollDice(&dice1, &dice2);
 printf("%d %d\n+++++++++\n", dice1, dice2);
}

/* Definition of rollDice */
void rollDice(int *dicevalue1, int *dicevalue2) 
{
  time_t t;

  srand((unsigned) time(&t));

        *dicevalue1= (rand() % DICERANGE) + 1; 
        *dicevalue2= (rand() % DICERANGE) + 1; 
        printf("%p\n", (void*)dicevalue1);
        printf("%p\n", (void*)dicevalue2);
        printf("**************\n");
  
}

/* Definition of addDice  */

/* Definition of countSum  */

/* Definition of printHistogram */
