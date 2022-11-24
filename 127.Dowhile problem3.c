#include <stdio.h>

void main()
{
    printf("RA2211042010027\n");
    printf("Enter a number");
    int n;
    scanf("%d",&n);
    do{
        printf("%d\n",n%10);
        n/=10;
    }while(n>0);
}
