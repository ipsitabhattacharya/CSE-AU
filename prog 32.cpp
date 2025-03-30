#include <stdio.h>  

int main() {  
    int number, count = 0;  

    
    printf("Enter a number: ");  
    scanf("%d", &number);  

 
    number = (number < 0) ? -number : number;  


    while (number != 0 || count == 0) 
	{  
        number /= 10; // Remove the last digit  
        count++;      // Increment digit count  
    }  

 
    printf("The number of digits is: %d\n", count);  

    return 0;  
}  