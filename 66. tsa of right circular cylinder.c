#include<stdio.h>

int main()
{
  printf("RA2211042010035 \n");
  int radius, height, TSA;
  
  printf("Radius= ");
  scanf("%d", &radius);
  printf("Height= ");
  scanf("%d", &height);
  
  TSA = 3.14*radius*radius*height;
  printf("%d", TSA);
  
}
