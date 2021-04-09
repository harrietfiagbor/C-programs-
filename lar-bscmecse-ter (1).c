#include<stdio.h>
main()
{
 int a,b,c,lar;
   printf("Please enter the First Number");
   scanf("%d",&a);
   printf("Please enter the Second  Number");
   scanf("%d",&b);
   printf("Please enter the Third  Number");
   scanf("%d",&c);
   lar=(a>b)?(a>c)?a:c:(b>c)?b:c;
   printf("The Largest :%d",lar);
}
