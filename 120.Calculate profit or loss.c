#include <stdio.h>
int main()  
{  
    printf("RA2211042010035\n");
    int costprice,sellingprice, profit; 
    printf("enter cost price : ");  
    scanf("%d",&costprice);  
    printf("Enter selling price : ");  
    scanf("%d", &sellingprice);  
    if(sellingprice>costprice) 
    {  
        profit=sellingprice-costprice;  
        printf("Profit amount: %d\n",profit);  
    }  
    else if(costprice>sellingprice)
    {  
        profit=costprice-sellingprice;  
        printf("Loss amount: %d\n",profit);  
    }  
    else
    {  
        printf("No profit no loss\n");  
    }  
}  
