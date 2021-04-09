//this is a code for reversing a number
#include<stdio.h>
main()
{
	int n, ReversedNumber = 0, remainder, originalInteger;
	printf("enter the number you want to reverse:\t");
	scanf("%d",&n);
	
	originalInteger= n;
	
	while(n !=0)
	{
		remainder = n % 10;
		ReversedNumber =	ReversedNumber * 10 + remainder;
		n/=10;
	} 
	printf("\nthe reversed number is now:\t %d",ReversedNumber);
	
	 if (originalInteger == ReversedNumber)
        printf("\n%d is a palindrome.", originalInteger);
    else
        printf("\n%d is not a palindrome.",originalInteger);
    
    return 0;
}
