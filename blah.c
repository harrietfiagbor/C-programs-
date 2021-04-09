#include<stdio.h>
#include<math.h>
main()
{

int i = 0,r,n=0,q;
float bn;
printf("please enter the binary number: ");
scanf("%d",&q);
while(q>0)
{
	r=q%2;
	
	q=q/2;
	
	bn=bn+r*pow(10,i);
	
	i++;
}
printf("the decimal number: %.0f", bn);

}
