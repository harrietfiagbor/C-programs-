#include<stdio.h>
struct gang{
	char name[32];
	char city[10];
	char gender;
	int killed;
	int robbed;
};
main()
{
	struct gang harriet;
	printf("Enter name of gang member:\t");
	scanf("%s", harriet.name);
	printf("%s", harriet.name);
}
