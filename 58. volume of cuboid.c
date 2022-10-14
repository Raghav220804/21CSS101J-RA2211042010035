#include<stdio.h>

int main()
{
  printf("RA2211042010035 \n");
  int length, breadth, height, volume; 
  printf("Length= ");
  scanf("%d", &length);
  printf("Breadth= ");
  scanf("%d", &breadth);
  printf("Height= ");
  scanf("%d", &height);
  
  volume = length*breadth*height;
  printf("Volume=%d", volume);
  
}
