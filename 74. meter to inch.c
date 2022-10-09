#include <stdio.h>

int main()
{
  float meter, inch;
  printf("Enter the distance in meter");
  scanf("%f", &meter);
  inch= meter/39.37;
  printf("%f", inch);
}
