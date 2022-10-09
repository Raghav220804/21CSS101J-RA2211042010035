#include <stdio.h>

int main()
{
  float radius, length, TSA;
  printf("Radius: ");
  scanf("%f", &radius);
  printf("length: ");
  scanf("%f", &length);
  
  TSA = radius*3.14*(length+radius);
  printf("%f", TSA);
}