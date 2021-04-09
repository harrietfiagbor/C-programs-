/* This is a program using cosine function from the c math library .
It takes angles in degrees and  make it the cosine of the function. */
#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define MAX 180
main()
{
	int angle=0;
	float x, y;
	printf("	Angle		Cos(angle)\n\n");
	while(angle<=MAX)
	{
		x=(PI/MAX)*angle;
		y=cos(x);
		printf("	%d		%.4f\n",angle,y);
		angle=angle+10;
	}
	return 0;
}
