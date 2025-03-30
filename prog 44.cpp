#include <stdio.h>  

  
int factorial(int n) 
{  
 
    return (n > 1) ? n * factorial(n - 1) : 1;  
}  

int main() {  
    int n;  

     
    printf("Enter a non-negative integer: ");  
    scanf("%d", &n);  

 
    if (n < 0) {  
        printf("Factorial is not defined for negative numbers.\n");  
    } else {  
       
        int fact = factorial(n);  
        printf("The factorial of %d is: %d\n", n, fact);  
    }  

    return 0;  
}  