#include<stdio.h>
main()
{
	int i, j, rows;
	printf("enter the number of rows:\t");
	scanf("%d",&rows);
	for(i=1;i<=rows;++i)
	{
		for(j=1;j<=i+1;++j)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
