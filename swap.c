
/*swapping for sorting with the help of a third variable*/
#include<stdio.h>
int main()
{
	int temp, a ,b;

	printf("enter the value of a ");
	scanf("%d",&a);
		printf("enter the value of b");
	scanf("%d",&b);
	printf("\nthe numbers are a=%d,b=%d",a,b);
	
    	temp=a;
     	a=b;
	    b=temp;
	printf("\nthe numbers are: a=%d, b=%d",a,b);
}
