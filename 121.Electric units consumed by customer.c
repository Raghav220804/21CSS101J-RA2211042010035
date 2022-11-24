#include<stdio.h>
int main() {
  printf("RA2211042010035\n");
    int units,customer_number;
    float charges;
    printf("enter the customer number and the units consumed:");
    scanf("%d%d",&customer_number,&units);
    if(units<=200) {
        charges=0.5*units;}
    else if (units <= 400) {
            charges=100+0.65*(units-200);}
    else if(units<=600) {
                charges=230+0.8*(units-400);}
    else {
                    charges=390+(units-600);}
    printf("customer number: %d charges: %f\n",customer_number,charges);
}
