#include<stdio.h>

int main()
{
  printf("RA2211042010035 \n");
  int height, base, area;
  printf("Enter the height of the parellogram:");
  scanf("%d", &height);
  printf("Enter the base of the parellogram:");
  scanf("%d", &base);
  
  area = height * base;
  printf("The area of your parellogram is: %d", area);
  
}
