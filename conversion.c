#include<stdio.h>
int main()
{
//this is a program for unit conversion of ounches to metric tons
	float packageWeightInOunces=0.0f;
	float packageWeightInTons =0.0f;

	const float METRIC_TON=35273.92;
	printf("enter the weight of package in ounces:\t");
	scanf("%f",&packageWeightInOunces);
	packageWeightInTons=packageWeightInOunces/METRIC_TON;
	printf("the weight in METRIC_TON is:\t %f",packageWeightInTons);
}
