#include<stdio.h>
int main(){
    printf("RA2211042010035 \n");
    int v,d,t;
    
    printf("Enter distance : ");
    scanf("%d", &d);
    printf("Enter time: ");
    scanf("%d", &t);
    v = d / t;
    printf("velocity = %d",v);
    return 0;
}
