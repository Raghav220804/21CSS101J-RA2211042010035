/*Tina's brother gave her a friendly task of calculating the number of squares in a board that has n*n squares of dimensions 1cm *1cm each.

 Help her to find the number of total squares including all small and big ones.*/

 #include<stdio.h>
 int main() {
   printf("RA2211042010035\n");
 	int n,a;
 	scanf("%d",&n);
 	a=(n*(n+1)*(2*n+1))/6;
 	printf("%d",a);
 	return 0;
 }
