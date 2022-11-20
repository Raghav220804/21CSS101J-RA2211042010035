#include<stdio.h>
#define SWAP(a,b,temp)(temp = a , a = b, b = temp)
int main(){
    int x = 100 , y = 20 , temp = 0;
    SWAP(x,y,temp);
    printf("x = %d, y = %d\n",x,y);
    return 0;
}
