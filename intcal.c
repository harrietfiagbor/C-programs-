/*this is a program on interest calculation.
the formula is A=P(1 +r/100) which is simplified. #define is a preprocessor compiler directive.
let A represent amount, r to be inrate and p for principal */
#include<stdio.h>
#define PERIOD 10
#define PRINCIPAL 5000.00
main()
{
	float amount, principal,inrate;
	principal=PRINCIPAL;
	int year=0;
	inrate=0.11;
	while(year<=PERIOD)
	{
		printf("%2d %8.2f\n\a",year,amount);
		amount=principal+principal*inrate;
		year=year++;
		principal=amount;
	}
	return 0;
}
