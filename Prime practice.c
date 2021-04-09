#include<stdio.h>
main()
{
	int i, j, n, flag=0;
	printf("enter the number of terms ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i%j==0)
			flag= flag +1;
		}
		if(flag==2)
		printf("%d is prime number",i);
		else
	    printf("%d is not prime",i);
	}

}
