#include <stdio.h>  

int main() {  
    int number, reversedNumber = 0;  

  
    printf("Enter a number: ");  
    scanf("%d", &number);  

  
    number = (number < 0) ? -number : number;  

   
    while (number != 0) {  
        reversedNumber = reversedNumber * 10 + (number % 10); 
        number /= 10;   
    }  

     
    printf("The reverse of the number is: %d\n", reversedNumber);  

    return 0;  
}  