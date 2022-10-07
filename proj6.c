#include <stdio.h>
float main() {
    float length,breadth,area;
    printf("enter the length and breadth:");
    scanf("%f %f",&length,&breadth);
    area=length*breadth;
    printf("The area is %f",area);
    return 0;
}