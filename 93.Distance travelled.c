#include <stdio.h>
 int main() {
  printf("RA2211042010035\n");
   float a, u, t;
   printf("Enter the acceleration value : ");
   scanf("%f", &a);
   printf("Enter the initial velocity : ");
   scanf("%f", &u);
   printf("Enter the time taken : ");
   scanf("%f", &t);
   float d=u*t+(0.5*a*t*t);
   printf("Distance travelled : %f\n",d);
 }
