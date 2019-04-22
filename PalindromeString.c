
#include <stdio.h>
#include <string.h>
main()
{
	int begin,end,count;
	char ori[100],re[100];
	puts("Printf whatever string you would like to check: ");
	gets(ori);
	// counting string
	while(ori[count]!='\0')
	count++;
	
	end=count-1;
	for(begin=0;begin<count;begin++)
	{
	re[begin]=ori[end];
	end--;	
	}
	re[begin]='\0';
	printf("the reverse string: %s\n",re);
	if(strcmp(ori,re)==0)
	{
		printf("The String above is palindrome");
	}
	else
	{
		printf("The String above is not palindrome");
	}
}
