#include <stdio.h>
int main() {
    float simple_intrest,principle,rate,years;
    printf("enter the amount of principle\n");
    scanf("%f",&principle);
    printf("enter the rate\n");
    scanf("%f",&rate);
    printf("years\n");
    scanf("%f",&years);
    simple_intrest=(principle*years*rate)/100;
    printf("%f",simple_intrest);
    return 0;
}