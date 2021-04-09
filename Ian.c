#include<stdio.h>
main()
{
	int grades[2][5]={5,6,10,9,1,9,8,7,1,2}, i,j; 
	float avg; 
	for(i=0;i<2;i++){
		avg =0;
		for(j=0;j<5;j++){
			avg+= grades[i][j];
		}
		avg/=5.0;
	printf("Average of Grades in subject  %d: is %.2f\n",i ,avg );
	
	}
	return 0;
	
}
