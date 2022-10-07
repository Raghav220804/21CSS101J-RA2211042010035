#include <stdio.h>
int main() {
    float length,breadth,perimeter;
    printf("enter the length:");
    scanf("%f",&length);
    printf("enter the breadth:");
    scanf("%f",&breadth);
    perimeter=2*(length+breadth);
    printf("The perimeter is 2x(l+b)= %f",perimeter);
    return 0;
}
