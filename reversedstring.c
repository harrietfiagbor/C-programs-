

//this is a program to reverse a string
#include<stdio.h>
#include<string.h>
main()
{
	char str[100]; 
	int i= 0, j= 0, temp, reversed_str[100];
	printf("Enter the string: ");
	gets(str);
	j=strlen(str)-1;
	printf("\nthe length of the string is: %d",j);
	j--;

	while(i<j)
	{
/*	j=strlen(str)-i-1;
	i++;
	j--;
}*/
	temp= str[j];	
	str[j]= str[i];
	str[i]= temp ;
	i++;
	j--;
	}	
printf("\nthe reversed string is: ");
puts(str);
}
