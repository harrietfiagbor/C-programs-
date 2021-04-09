//this is program for printing out eqn of a line im the form ax + by =c .
#include<stdio.h>
main()
{
	int a=0,b=0,c=0,x=0,y=0;
	printf("\tax + by = c\n");
	printf("Enter the first value:\t");
	scanf("%d",&a);
	printf("\nEnter the second value:\t");
	scanf("%d",&b);
	printf("\nEnter the third value:\t");
	scanf("%d",&c);
	printf("\n%dx + %dy = %d\n",a,b,c);
	
	return 0;
}
