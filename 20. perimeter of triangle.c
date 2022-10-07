#include <stdio.h>
int main() {
    int base,height,perimeter;
    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the height:");
    scanf("%d",&height);
    perimeter=2*(base+height);
    printf("%d",perimeter);
    return 0;
}
