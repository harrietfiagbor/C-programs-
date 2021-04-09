#include <stdio.h>
 
int main()
{
  int n, c, k;
 
  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);
 
  
 
  for (c = 31; c >= 0; c--)
  {
    k = n >> c;
 
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
  printf("%d in binary number system is:\n", n);
 
  printf("\n");
 
  return 0;
}
