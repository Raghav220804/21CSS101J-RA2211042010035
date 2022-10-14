#include <stdio.h>
int main() {
    printf("RA2211042010035 \n")
    int length,breadth,height,surface_area;
    printf("enter the length:");
    scanf("%d",&length);
    printf("enter the breadth:");
    scanf("%d",&breadth);
    printf("enter the height:");
    scanf("%d",&height);
    printf("%d",surface_area=2*(length*breadth+length*height+breadth*height));
    return 0;
}
