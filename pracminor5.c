#include<stdio.h>
main()
{
	int a, b, response, result;
	printf("enter two numbers: ");
	scanf("%d%d",&a,&b);
	switch(response)
	{
		case 1:
			result=a+b;
			printf(" the addition of the numbers %d and %d is %d",a, b, result);
		case 2:
			result=a-b;
			printf(" the difference of the numbers %d and %d is %d",a, b, result);
	    case 3:
	    	result=a%b;
			printf(" the remainder of the numbers %d and %d is %d",a, b, result);
		case 4:
			result=a*b;
			printf(" the multiplication of the numbers %d and %d is %d",a, b, result);
		case 5:
			result=a/b;
			printf(" the ratio of the numbers %d and %d is %d",a, b, result);
	}
}
