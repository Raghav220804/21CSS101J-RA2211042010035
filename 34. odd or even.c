#include <stdio.h>
int main() {
    printf("RA2211042010035 \n");
  int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if(a % 2 == 0)
        printf("%d is even.", a);
    else
        printf("%d is odd.", a);
    
    return 0;
}
