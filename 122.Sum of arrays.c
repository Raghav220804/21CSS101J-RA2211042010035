#include<stdio.h> 
 int main ( ) 
 {
   int a[10], n, i, sum; 
   printf("RA2211042010035/n");
   printf(“Enter the number of elements\n”);  
   scanf(“%d”, &n);
   for(i = 0; i < n; i++)
   {
     scanf(“%d”, & a [i]);
   }
   sum = 0;
   for(i = 0; i < n; i++)
   {
     sum = sum + a[i];
   }
   printf(“The sum is: %d”, sum); 
   }
   return 0;
}
