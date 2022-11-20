
#include<stdio.h>
int main(){
  printf("RA22110420010035\n");
  int a,b;
  printf("Enter two numbers : ");
  scanf("%d %d",&a,&b);
  if(a>b)
    printf("The largest number : %d\n",a);
  if (b>a)
    printf("The largest number : %d\n",b);
  if(a<b)
  printf("The smallest number : %d\n",a);
  if(b<a)
    printf("The smallest number : %d\n",b);
}
