#include <stdio.h>

int main() {
    float kilometre,metre;
    printf("enter the distance in metre:");
    scanf("%f",&metre);
    kilometre=metre/1000;
    printf("the distance in kilometre:%f",kilometre);
    return 0;
}
