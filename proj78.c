#include<stdio.h>

int main()
{
  float radius, volume;
  printf("Radius: ");
  scanf("%f", &radius);
  
  volume = 0.66*3.14*radius*radius*radius;
  
  printf("Volume = %f", volume);
  
}