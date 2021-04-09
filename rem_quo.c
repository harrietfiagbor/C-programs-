#include<stdio.h>
int main()
{
	int f1, f2, remainder, quotient;
	printf("enter the first number:\t");
	scanf("%d",&f1);
	printf("enter  the second number:\t");
	scanf("%d",&f2);
	remainder=f1%f2;
	quotient=f1/f2;
	printf("the remainder is:\a\t %d",remainder);
	printf("\nthe quotient is:\t %d", quotient);
	return 0;
	
}
