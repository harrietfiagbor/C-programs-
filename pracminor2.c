//program to find smallest number among three numbers
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c)
	printf("%d is the smallest",a);
    if(b<a && b<c)
	printf("%d is the smallest",b);
	if(c<a && c<b)
	printf("%d is the smallest",c);
}
