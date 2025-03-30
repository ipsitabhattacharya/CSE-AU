#include <stdio.h>  

 
int fibonacci(int n) {  
    
    return (n == 0) ? 0 : (n == 1) ? 1 : fibonacci(n - 1) + fibonacci(n - 2);  
}  

int main() {  
    int n;  

   
    printf("Enter the number of terms in the Fibonacci series: ");  
    scanf("%d", &n);  

    printf("Fibonacci series up to %d terms:\n", n);  
    for (int i = 0; i < n; i++) {  
        printf("%d ", fibonacci(i)); 
    }  
    printf("\n");  

    return 0;  
}  