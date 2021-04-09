//program to determine if character is alphabet, digit or special symbol.
#include<stdio.h>
main()
{
	char c;
	printf("enter the character: ");
	scanf("%c",&c);
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))
	printf("the character is an aplphabet");
	else if(c>='0' && c<='9')
	printf("the character is a digit");
	else
	printf("the character is a special symbol");
}
