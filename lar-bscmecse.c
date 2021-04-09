#include<stdio.h>
main()
{
 int a,b,c;
   printf("Please enter the First Number");
   scanf("%d",&a);
   printf("Please enter the Second  Number");
   scanf("%d",&b);
   printf("Please enter the Third  Number");
   scanf("%d",&c);
 if(a>b)
   if(a>c)
     printf("The Largest :% d",a);
   else
     printf("The Largest :%d",c);
 else
     if(b>c)
        printf("The Largest : %d",b);
     else
        printf("The Largest :%d",c);
}
