#include <stdio.h>
 int main() {
   printf("RA2211042010035\n");
   int a, b, c, d, e;
   printf("Enter marks for 5 subjects : ");
   scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
   float marks=a+b+c+d+e,avg=marks/5.0;
   printf("total marks : %f\n", marks);
   printf("average marks : %f\n",avg);
 }
