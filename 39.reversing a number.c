#include <stdio.h>
int main() {
  printf("RA2211042010035 \n");
  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);
  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  printf("Reversed number = %d", reverse);

  return 0;
}
