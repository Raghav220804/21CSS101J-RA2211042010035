#include <stdio.h>

int main() {
   printf("RA2211042010035 \n");
   float a,b;
   printf("enter one number: ");
   scanf("%f",&a);
   printf("enter another number to compare: ");
   scanf("%f",&b);
   if(a>b)
   printf("the biggest among the numbers is %f",a);
   else
   printf("the biggest among the number is %f",b);
  
    return 0;
}
