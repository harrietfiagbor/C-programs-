#include <stdio.h>
#include <stdlib.h>
main (void)
{
	float F1=0, F2=0.0;

	int  n;
	int response;
	do{
		printf("\nenter 2 numbers\n");
	scanf("%f" , &F1);
	scanf("%f", &F2);
	
	printf("enter 1 for addition\n");
	printf("enter 2 for subraction\n");
	printf("enter 3 for multiplication\n");
	printf("enter 4 for division\n");
	printf("enter 5 for modulus\n");
	printf("enter -1 for exit\n");
	
	scanf("%d", &response);
	switch(response){
		float result;
		case 1:
			result=F1 +F2;
			printf("\nthe sum of %f and %f is %f", F1 ,F2,result);
			break;
		case 2:
			result=F1-F2;
			printf("\nthe difference between %f and %f is %f",F1,F2,result);
			break;
		case 3:
			result=F1*F2;
			printf("\nthe product of %f and %f is %f",F1,F2,result);
			break;
		case 4:
			result=F1/F2;
			printf("\nthe quotient of %f and %f is %f",F1, F2,result);
			break;
		case 5:
			result= (int)F1 % (int)F2;
			printf("\nthe remainder when %.2f is divided by %f is %f",F1,F2,result);
			break;
		default:
			printf("bye...bye");
			exit(1);
			break;
			}
				
			}
			while (n > 0);
				
				return 0;
}
