#include<stdio.h>
int main()
{
	// typecasting is a process of converting one datatype into another without declaring it in the type of the latter.
	
	double c=20;
	double f;
	int x=9;
	int y=5;
	//f=(x/y)*c+32;..... this will only print 52 whilst actual value is 68 because it giving integer results
	 
	f=  (float)x/y*c+32;  //bringing (float) makes it typecasting... changes the integer state to float stage without declaring it in float type.
	
	printf("the answer is:\t %f ",f);
	
}
