#include<stdio.h>
#include <math.h>
main()
{
int i, r, n=0, q=0;
int bn = 0;
printf("please enter the decimal number:\t");
scanf("%d",&n);
while(n!=0)
{
	q=n/2;
	r=n%2;
	n=q;
	bn=bn+r*pow(10,i);
	i++;
}
printf("the binary number:%d", b);
}
