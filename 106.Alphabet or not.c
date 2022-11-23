#include <stdio.h>

int main()
{
  char W;
  printf("RA2211042010035\n");
  printf("Enter any character : ");
  scanf("%c", &W);
  if ('a' <= W && W <='z' || 'A' <= W && W<='Z')
  {
    printf("Given character %c is an alphabet\n", W);
  }
  else
  {
    printf("Given character %c is not an alphabet\n", W);
  }
}
