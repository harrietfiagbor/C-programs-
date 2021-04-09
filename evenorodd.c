#include<stdio.h>
int isEvenx(int input)
{
	return input % 2==0?1 : 0;
}

main()
{
	int a;
   printf("enter your input: ");
   scanf("%d",&a);
   	if(isEvenx(a))
	printf("%d is even ", a);
	else
	printf("%d is odd", a);
	return 0;
}
