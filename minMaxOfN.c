
#include<stdio.h>
int main()
{
    float average;
    int n, count=0, sum=0, squaresum=0, num, min, max, product=1;

    printf("Please enter the number of numbers you wish to evaluate\n");
    scanf("%d",&n);

   printf("Please enter %d numbers\n",n);

   scanf("%d",&num);
   max = min = num;

   while(1)
   {
        if(num>max)
           max=num;
        if(num<min)
           min=num;

     sum = sum+num;
     product = product*num;
     //squaresum = squaresum + (num*num);
    
     count++;
     if(count == n)
        break;
     scanf("%d",&num);

   }
    average = sum/n;
    printf("\nthe max is: %d",max);
    printf("\nthe min is: %d",min);
    printf("\nthe sum is: %d",sum);
    printf("\nthe product is: %d",product);
    printf("\nYour average is %.2f\n",average);
//printf("The sum of your squares is %d\n",squaresum);
}
