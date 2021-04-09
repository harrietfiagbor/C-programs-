/* application of arrays*/
#include<stdio.h>
#include<stdbool.h>  //this is from the boolean library
int main()
{
	int number[10]={1,2,5,16,0,-1,15,35,9,100};
	int i;
	bool found = false;
	int target;
		printf("enter the number\n");
		scanf("%d",&target );
	for(i=0;i<10;i++) {
		if( target==number[i]) {
			
			found = true;
			break;
		}
	}
	
	if(found){   //same as if(false)
		printf("\n%d is found at position %d", target, i+1);
	}else {
		printf("\n%d not found in array", target);
	}
}

