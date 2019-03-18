#include<stdio.h>
main()
{
	int b,c=0,e;
	char s[100],r[100];
	puts("Enter a word you would like to reverse:");
	gets(s);
	
	while (s[c]!='\0')
	c++;
	
	e= c-1;
	
	for (b=0;b<c;b++){
		r[b]=s[e];
		e--;
	}
	
	r[b]='\0';
	printf("The Reverse Output is : %s",r);
	
}
