/* how to enter data in arrays*/
#include<stdio.h>
int main()
{
	int i,a[5],sum=0,avg;
	for(i=0;i<5;i++)
	{
		printf("please enter the value of a[%d]=",i);
	scanf("%d",&a[i]);
	 sum=sum+a[i];
}
	
		for(i=0;i<5;i++)
		printf("\na[%d]=%d",i,a[i]);
		printf("\nthe sum=%d",i);
		printf("\nthe value of i=%d",i);
		avg=sum/i;
		printf("\nthe average:%d",avg);
}
 
