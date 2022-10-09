#include<stdio.h>

int main()
{
  int i;
  printf("Enter a number");
  scanf("%d", &i);
  printf("%lu", sizeof(i));
  return 0;
}