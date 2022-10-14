#include <stdio.h>
int main() {
    printf("RA2211042010035 \n");
    float radius,height,tsa;
    printf("enter the radius:");
    scanf("%f",&radius);
    printf("enter the height:");
    scanf("%f",&height);
    printf("%f",tsa=2*3.14*radius*(height+radius));
    return 0;
}
