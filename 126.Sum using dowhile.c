#include <stdio.h>

void main()
{
    printf("RA2211042010035\n");
    printf("Enter a number");
    int n,s=0,i=0;
    scanf("%d",&n);
    do{
        s+=i;
        i++;
    }while(i<=n);
    printf("Sum = %d",s);
}
