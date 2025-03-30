#include <stdio.h>  

 
int sumOfNaturalNumbers(int n) {  
   
    return n + (n > 0 ? sumOfNaturalNumbers(n - 1) : 0);  
}  

int main() {  
    int n;  

   
    printf("Enter a positive integer n: ");  
    scanf("%d", &n);  

 
    int sum = sumOfNaturalNumbers(n);  
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);  

    return 0;  
}  