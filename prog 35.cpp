#include <stdio.h>  

int main() {  
    int number, originalNumber, reversedNumber = 0;  

      
    printf("Enter a number: ");  
    scanf("%d", &number);  


    originalNumber = number;  
 
    if (number < 0) {  
        number = -number;  
    }  
  
    while (number != 0) {  
        reversedNumber = reversedNumber * 10 + (number % 10);  
        number /= 10;
    }  
    if (originalNumber < 0) {  
        originalNumber = -originalNumber;  
    }  
    
    if (originalNumber == reversedNumber) {  
        printf("%d is a palindrome.\n", originalNumber);  
    } else {  
        printf("%d is not a palindrome.\n", originalNumber);  
    }  

    return 0;  
}