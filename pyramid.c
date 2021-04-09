//this is a program for drawing a half pyramid
#include<stdio.h>
main()
{
	int rows, i, j;
	printf("enter the number of rows:\t");
	scanf("%d",&rows);
	for(i=1;i<=rows;++i)
	{
		for(j=1;j<=i;++j)
		{
			printf("*");
		}
		printf("\n");
	}
}
