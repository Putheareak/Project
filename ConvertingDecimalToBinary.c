/*The Program will take input as decimal and converted into binary*/

#include<stdio.h>
#include<math.h>
main()
{
	int bin[20],i,n;
	puts("Enter Your Decimal Number: ");
	scanf("%d",&n);
	for (i=0;n>0;i++){
		bin[i]=n%2;
		n=n/2;
	}
	printf("The Binary Form is: ");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",bin[i]);
	}
}
