#include <stdio.h>
 int main()  {  
     printf("RA2211042010035\n");
     int a, b, c; 
     printf("Enter three sides of triangle: ");  
     scanf("%d%d%d",&a,&b,&c);  
     if(a==b && b==c)
     {  
         printf("Equilateral triangle\n");  
     }  
     else if(a==b||a==c||b==c)
     {  
         printf("Isosceles triangle\n");  
     }
     else  
     {  
         printf("Scalene triangle\n");  
     }  
     return 0;  
 }
