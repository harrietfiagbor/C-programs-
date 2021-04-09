//this is a code to find the greatest number using the if else ladder
#include<stdio.h>
main()
{
	int f1, f2, f3;
	printf("enter three numbers:\n");
	scanf("%d %d %d",&f1,&f2,&f3);
	if(f1<f2)
	{
		printf("\n%d is the greatest",f2);
	}
	else if(f2<f3)
	{
		printf("\n%d is the greatest",f3);
	}
	else
	{
		printf("\n%d is the greatest",f1);
	}
	return 0;
}
