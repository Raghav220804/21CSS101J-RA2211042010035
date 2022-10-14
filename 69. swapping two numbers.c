#include <stdio.h>
int main() {
  printf("RA2211042010035 \n");
  double a, b;
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);
a = a - b;   
b = a + b;
a = b - a;
 printf("After swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf", b);
}
