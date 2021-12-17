#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
	srand(time(NULL));

	int loopCond;
	int processNum;
	int outputNum;
	int ranNum;

	printf("Enter an Integer: ");
	scanf("%d", &processNum);
	printf("How many loops: ");
	scanf("%d", &loopCond);
	
	while( loopCond != 0)
	{	
		ranNum = rand() % 10;
		outputNum = processNum * loopCond * ranNum;
		printf("%d * %d * %d = %d\n", processNum, loopCond, ranNum, outputNum);
		loopCond--;
	}

	return 0;
}
