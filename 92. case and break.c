#include <stdio.h>  
int main()  
{  
    int x = 10, y = 5;   
    switch(x>y && x+y>0)  
    {  
        case 1:   
        printf("hello");  
        break;   
        case 0:   
        printf("bye");  
        break;  
        default:   
        printf(" Hello bye ");  
    }   
          
}  
