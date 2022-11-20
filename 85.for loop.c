#include <stdio.h>
int main()
{
    int a, b, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    for(b = 1; b <= a; ++b)
    sum += b;
    printf("Sum = %d", sum);

    return 0;
}
