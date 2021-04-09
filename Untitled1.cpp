#include <stdio.h>
main( void)
{
	int choice=0;
	printf( "would you accept the offer? 1-for yes, 0 for No:\t" );
	scanf ("%d", &choice);
	if (choice==0)
	{printf( "Then you're staying home");}
	else{printf( "Welcome to school");}
return 0;
}
