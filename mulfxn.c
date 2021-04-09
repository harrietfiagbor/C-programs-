/*this is a user defined function. instead of using prinf by the c system, we use our own function.*/

main()
{
	int a,b,c;
	a=5;
	b=26;
	c=mul(a,b);
	printf("multiplication of %d and %d is %d",a,b,c);
}

int mul(int x, int y)
int p;
{
	p=x*y;
	return(p);
}
