/* swapping for arrays without a third variable*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number a:\t");
	scanf("%d",&a);
	printf("\nenter the number b:\t");
	scanf("%d",&b);
    a=a+b;
	b=a-b;
	a=a-b;
	printf("\nthe swapped numbers are  %d and %d" ,a,b);
	return 0;
}
