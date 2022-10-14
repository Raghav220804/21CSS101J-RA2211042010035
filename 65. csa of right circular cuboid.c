#include<stdio.h>

int main()
{
  printf("RA2211042010035 \n");
  int radius, height, CSA;
  
  printf("Radius= ");
  scanf("%d", &radius);
  printf("Height= ");
  scanf("%d", &height);
  
  CSA = 2*3.14*radius*height;
  printf("%d", CSA);
  
}
