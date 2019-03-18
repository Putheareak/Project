/*The Program will take input as Binary and convert it to decimal*/

#include<stdio.h>
#include<math.h>
main()
{
	int num,bin,dec=0,re,i=0;
	printf("Enter Your Binary Form (1s or 0s): ");
	scanf("%d",&bin);
	while(bin>0)
	{
		
		re=bin%10;
		dec=dec+(re*pow(2,i));
		bin/=10;
		i++;
	}
	printf("The Decimal Form is : %d",dec);
}
