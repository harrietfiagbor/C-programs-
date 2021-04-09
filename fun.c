#include<stdio.h>
void add(int *);
main()
{
	int num = 2;
	printf("%p",&num);
	printf("\nthe value of num before calling the function=%d ",num); 
	add(&num);
	printf("\nthe value of the num after calling the function=%d ",num);
}
void add(int *n)
{
	*n = *n+ 10;
	printf("\nthe value of the num in the called function= %d ",*n);
}
