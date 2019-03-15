#include<stdio.h>
main()
{
	int sp,r,p,no,n;
	printf("Enter Your Row:");
	scanf("%d",&no);
	n=no;
	for(r=1;r<=no;r++)
	{for (sp=1;sp<n;sp++)
		{
		printf(" ");
		}
	n--;
	for(p=1;p<=r;p++)
	{
		printf("* "); // Print should be have astrix and space.
	}
	printf("\n");
	}
}
