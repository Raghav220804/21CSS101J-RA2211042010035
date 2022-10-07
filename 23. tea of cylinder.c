#include <stdio.h>
int main() {
    float radius,height,tsa;
    printf("enter the radius:");
    scanf("%f",&radius);
    printf("enter the height:");
    scanf("%f",&height);
    printf("%f",tsa=2*3.14*radius*(height+radius));
    return 0;
}
