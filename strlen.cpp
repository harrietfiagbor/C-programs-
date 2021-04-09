//this is a program to read the length of a string without using the function strlen.
#include<stdio.h>
main()
{
	char str[20];
	int i = 0;
	printf("enter the characters:\t");
	gets(str);
	while(str[i]!='\0')
	{
		i++;
	}	
    printf("%d",i);
}
   
   
   
   
