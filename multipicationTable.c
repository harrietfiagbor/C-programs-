
// this is a program to multiply numbers for of like a multiplication table.
#include<stdio.h>
main()
{
	int i=0,n=0,result=0,number=0;
	printf("Enter the number of tables:\t");
	scanf("%d",&n);
	printf("\nEnter the number for the multiplication:\t");
	scanf("%d",&number);
	while(i<=n)
	{
			result= number*i;
		printf("%d x %d = %d\n",number,i,result);
		i=i++;
	}
}
