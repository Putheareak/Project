/*this program is a 8 ball magic program*/
#include<stdio.h>
#include<stdlib.h>
void ans(int a);
void main()
{
	char arr[100];
	int res;
	printf("\t---Welcome to 8 Magic ball---\n");
	printf("Type Whatever You Would Like To Ask: ");
	scanf("%s",&arr[100]);
	srand(time(NULL));
	res=1+rand()%20;
	ans(res);
}
void ans(int a)
{
	switch(a)
	{
		case 1 : printf("It is certain."); 
		break;
		case 2 : printf("It is decidedly so."); 
		break;
		case 3 : printf("Without a doubt"); 
		break;
		case 4 : printf("Yes – definitely."); 
		break;
		case 5 : printf("You may rely on it."); 
		break;
		case 6 : printf("As I see it, yes."); 
		break;
		case 7 : printf("Most likely."); 
		break;
		case 8 : printf("Outlook good."); 
		break;
		case 9 : printf("Yes."); 
		break;
		case 10 : printf("Signs point to yes."); 
		break;
		case 11 : printf("Reply hazy, try again."); 
		break;
		case 12 : printf("Ask again later."); 
		break;
		case 13 : printf("Better not tell you now."); 
		break;
		case 14 : printf("Cannot predict now."); 
		break;
		case 15 : printf("Concentrate and ask again."); 
		break;
		case 16 : printf("Don’t count on it."); 
		break;
		case 17 : printf("My reply is no."); 
		break;
		case 18 : printf("My sources say no."); 
		break;
		case 19 : printf("Outlook not so good."); 
		break;
		case 20 : printf("Very doubtful."); 
		break;
	}
}
