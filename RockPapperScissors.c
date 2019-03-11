#include <stdio.h>
#include <stdlib.h>
void random(int a);
int main()
{
	int cho;
	puts("1)Rock\n2)Papper\n3)Scissor");
	printf("Enter Your Choice:\n");
	scanf("%d",&cho);
	random(cho);
}
	
	
void random(int a)
{
	int i=0,ran;
	srand(time(NULL)); // This is a seed random which will give you a different start of random number.
	ran=1+rand()%3;    // This is rand() meaning usind random it will take from 0 to 2
	switch (a)
	{
		case 1 : printf("\nYou choose: Rock\n");
		break;
		case 2 : printf("\nYou choose: Papper\n");
		break;
		case 3 : printf("\nYou choose: Scissor\n");
		break;
	}
	switch (ran)
	{
		case 1 : printf("Computer choose: Rock\n");
		break;
		case 2 : printf("Computer choose: Papper\n");
		break;
		case 3 : printf("Computer choose: Scissor\n");
		break;
	}
	if (ran==a)
	{
		printf("\n-----------------------------\n");
		printf("^0^ Tie !! Close call *0*");
		printf("-----------------------------\n");
	}
	else if (a==1)
	{
		if(ran==3)
		{
		printf("\n-----------------------------\n");
		printf("***You Won !! Congrat***\n");
		printf("-----------------------------\n");
		}
		else
		{
		printf("\n-----------------------------\n");
		printf("-_-You lose !! Nice try-_-\n");
		printf("-----------------------------\n");
		}	
	}
	else if (a==2)
	{
		if(ran==1)
		{
			printf("\n-----------------------------\n");
			printf("***You Win !! Congrat***\n");
			printf("-----------------------------\n");
		}
		else
		{
			printf("\n-----------------------------\n");
			printf("-_-You lose !! Nice try-_-\n");
			printf("-----------------------------\n");
		}
	}
	else
	{
		if(ran==2)
		{
			printf("\n-----------------------------\n");
			printf("***You Win !! Congrat***\n");
			printf("-----------------------------\n");
		}
		else
		{
			printf("\n-----------------------------\n");
			printf("-_-You lose !! Nice try-_-\n");
			printf("-----------------------------\n");
		}
	}	
}	
