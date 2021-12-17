#include<stdio.h>

/*Function Declaration*/
float addition(float x, float y);
float subtraction(float x, float y);
float multi(float x, float y);
float division(float x, float y);

/*Variables*/
char operator = {0};
int loopChoice = 1;
float valueOne;
float valueTwo;
float processedNumber;
float funcOut;

int main()
{
	while(loopChoice == 1)
	{
		printf("What operation (+,-,*,/): ");
		scanf("%1s", &operator);

		printf("First Number: ");
		scanf("%f", &valueOne);

		printf("Second Number: ");
		scanf("%f", &valueTwo);

		switch(operator){
		case '+':
			funcOut = addition(valueOne, valueTwo);
			printf("%.2f + %.2f = %.2f\n",valueOne ,valueTwo ,funcOut);
			break;
		case '-':
			funcOut = subtraction(valueOne, valueTwo);
			printf("%.2f - %.2f = %.2f\n",valueOne ,valueTwo ,funcOut);
			break;
		case '*':
			funcOut = multi(valueOne, valueTwo);
			printf("%.2f * %.2f = %.2f\n",valueOne ,valueTwo ,funcOut);
			break;
		case '/':
			funcOut = division(valueOne, valueTwo);
			printf("%.2f / %.2f = %.2f\n",valueOne ,valueTwo ,funcOut);
			break;
		}
		printf("Start from beginning?(0,1): ");
		scanf("%d", &loopChoice);
	}
	return 0;
}

/*Function Definition*/
float addition(float x, float y)
{
	processedNumber = x + y;
	return processedNumber;
}

float subtraction(float x, float y)
{
	processedNumber = x - y;
	return processedNumber;
}

float multi(float x, float y)
{
	processedNumber = x * y;
	return processedNumber;
}

float division(float x, float y)
{
	processedNumber = x / y;
	return processedNumber;
}
