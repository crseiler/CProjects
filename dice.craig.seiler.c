/* Preprocessor  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DICERANGE 6
//#define ROLLTIMES 1000.0

/* prototype */
void rollDice(int *dice1, int *dice2);
void addDice(int *sum, int *dice1, int *dice2);
void printHistogram(int values[], int *astkDelimitor);

double rolltimes = 100.00;
int astkDelimitor = 1;

/* Definition of main */
int main(int argc, char* argv[])
//int main(void)
{
        
	if(argc == 1){
          printf("%d\n", rolltimes);
          return 1;
	  }
	else if(argc > 3){
          printf("No\n");
          return 1;
	  }
	else if(argc == 3)
	  
	  {
	   if(strtod(argv[2], '\0'))
		{
		astkDelimitor = strtod(argv[2], '\0');
		}
  	   }	
	if(strtod(argv[1], '\0')){
	  rolltimes = strtod(argv[1], '\0');
	  printf("Rolltime:%d\n", rolltimes);  	
          int dice1, dice2, sum, increment, percentCounter;
	  double expectedPercentage[13] = {0, 0, 1, 2, 3, 4, 5, 6, 5,
					  4, 3, 2, 1};
	  int values[13] = {0};
	  for( increment = 0 ; increment < rolltimes ; increment++ ) 
		{
		rollDice(&dice1, &dice2);
		addDice(&sum, &dice1, &dice2);
		switch (sum){
			case 1: values[1]++;   break;
			case 2: values[2]++;   break;
			case 3: values[3]++;   break;
			case 4: values[4]++;   break;
			case 5: values[5]++;   break;
			case 6: values[6]++;   break;
			case 7: values[7]++;   break;
			case 8: values[8]++;   break;
			case 9: values[9]++;   break;
			case 10: values[10]++; break;
			case 11: values[11]++; break;
			case 12: values[12]++; break;
			}
		}
	  printHistogram(values, &astkDelimitor);
	  printf("Percentages\n\t Expected %\tActual %\tDifference\n");
	  //printf("%d Rolltime:", rolltimes);
	  for(percentCounter=2;percentCounter<=12;percentCounter++){
		printf("%d\t %.2lf\t\t%.2lf\t\t%.2lf\n", percentCounter,
		((expectedPercentage[percentCounter]/36)*100), (((values
		[percentCounter])/rolltimes)*100),(((expectedPercentage
		[percentCounter]/36)*100)-(((values[percentCounter])/
		rolltimes)*100)));
		//printf("!!!!!!!!!!!!!!!!%d", values[e]);
		//printf("%d", (values[e]/rolltimes));
		}
	  }

}
/* Definition of rollDice */
void rollDice(int *dicevalue1, int *dicevalue2) 
{
	time_t t;
	*dicevalue1= (rand() % DICERANGE) + 1; 
	*dicevalue2= (rand() % DICERANGE) + 1; 
}

/* Definition of addDice  */
void addDice(int *sum, int *dice1, int *dice2)
{
	*sum = *dice1 + *dice2;
}

/* Definition of printHistogram */
void printHistogram(int values[], int *astkDelimitor)
{
	int printCntr, x;
	
	//}
	printf("Sum of Dice Roll (Increments of %d) \n-------------------\n", *astkDelimitor);
	for(printCntr=2; printCntr<=12;printCntr++){
		printf("%d:\t ", printCntr);{
			for(x=values[printCntr]/(*astkDelimitor);x>0;x--){
				printf("*");
				}
			//printf("!!!!R%d", (*astkDelimitor));
			printf("!!!!R%d", (values[printCntr])%*astkDelimitor);
			//printf("R%d", (values[printCntr]%*astkDelimitor));
			printf("\n");
		}
	}
}

