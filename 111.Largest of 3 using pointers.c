#include <stdio.h>

 int main()
 {
     printf("RA2211042010035\n");
     printf("Enter marks(Math,Physics,Chemistry) : ");
     int math, phy, chem;
     int *ptr1 = &math;
     int *ptr2 = &phy;
     int *ptr3 = &chem;
     scanf("%d %d %d",&math,&phy,&chem);
     if(*ptr1 > *ptr2 && *ptr1 > *ptr3)
     {
         printf("Math\n");
     }
     if(*ptr2 > *ptr1 && *ptr2 > *ptr3)
     {
         printf("Physics\n");
     }
     else
     {
         printf("Chemistry\n");
     }
 }
