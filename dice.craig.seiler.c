/* Preprocessor  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DICERANGE 6
#define ROLLTIMES 1000.0

/* prototype */
void rollDice(int *dice1, int *dice2);
void addDice(int *sum, int *dice1, int *dice2);
void printHistogram(int values[]);

/* Definition of main */
int main(void)
{
        int dice1, dice2, sum, increment, percentCounter;
	double expectedPercentage[13] = {0, 0, 1, 2, (3), (4), (5), (6), (5), (4), (3), (2), (1)};
	int values[13] = {0};

	for( increment = 0 ; increment < ROLLTIMES ; increment++ ) 
	{
		rollDice(&dice1, &dice2);
		//printf("%d %d\n+++++++++\n", dice1, dice2);
		addDice(&sum, &dice1, &dice2);
		//printf("%d\n", sum);
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
	//printf("!!!!!%f", (values[3]/ROLLTIMES));
	printf("Percentages\n\t Expected %\tActual %\tDifference\n");
	for(percentCounter=2;percentCounter<=12;percentCounter++)
	{
				printf("%d\t %.2lf\t\t%.2lf\t\t%.2lf\n", percentCounter, ((expectedPercentage[percentCounter]/36)*100), (((values[percentCounter])/ROLLTIMES)*100),(((expectedPercentage[percentCounter]/36)*100)-(((values[percentCounter])/ROLLTIMES)*100)));
				//printf("!!!!!!!!!!!!!!!!%d", values[e]);
				//printf("%d", (values[e]/ROLLTIMES));
				}
				}

				/* Definition of rollDice */
				void rollDice(int *dicevalue1, int *dicevalue2) 
				{
				time_t t;

				*dicevalue1= (rand() % DICERANGE) + 1; 
				*dicevalue2= (rand() % DICERANGE) + 1; 
				//printf("%p\n", (void*)dicevalue1);
				//printf("%p\n", (void*)dicevalue2);
				//printf("**************\n");

				}

				/* Definition of addDice  */
				void addDice(int *sum, int *dice1, int *dice2)
				{
					*sum = *dice1 + *dice2;
					//printf("%p\n", (void*)sum);
				}

/* Definition of percentageOfSums  */

/* Definition of printHistogram */
void printHistogram(int values[])
{
	int printCntr, x;
	/**/
	int asterikDelim = 1;
	for(printCntr=2;printCntr<=12;printCntr++)

		if(values[printCntr] > 1000)
		{
			asterikDelim=150;
		}
		else if(values[printCntr] > 100)
		{
			asterikDelim=100;
		}
		else if(values[printCntr] > 10)
		{
			asterikDelim=10;
			break;
		}

	printf("Sum of Dice Roll (Increments of %d) \n-------------------\n", asterikDelim);
	for(printCntr=2; printCntr<=12;printCntr++)
	{
		printf("%d:\t ", printCntr);
		{
			int spaceCntr=20;
			for(x=values[printCntr]/asterikDelim;x>0;x--)
			{
				printf("*");
				spaceCntr--;
			}
			printf("R%d", (values[printCntr]%asterikDelim));
			for(;spaceCntr>0;spaceCntr--)
			{
				printf(" ");
			}

			printf("\n");
		}
	}
}

/* Definition of dicePercentage */

/* Definition of expectedValue */

/* Definition of diffValue */

