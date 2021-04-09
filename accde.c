#include<stdio.h>
#include<math.h>
main()
{
	int i,r,n=0,b=0,q;
	printf("Please Enter Decimal Number:\t");
	scanf("%d",&n);
	q=n;
	while(n>0)
	{
		q=n/2;
		r=n%2;
		n=q;
		b=b+r*pow(10,i)	;
		i++;
	}
	printf("The Binary Number:%d",b);
}
