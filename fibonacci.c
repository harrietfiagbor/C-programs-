
#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm, number=0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
    }
    number= number +t2-1;
    printf("\nsum is %d",number);
    return 0;
}
