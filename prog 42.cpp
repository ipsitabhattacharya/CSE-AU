#include <stdio.h>  

int main() {  
    int rows = 4;    

  
    for (int i = 1; i <= rows; i++) {  
         
        for (int j = i; j < rows; j++) {  
            printf("  ");  
        }  
         
        for (int j = 1; j <= i; j++) {  
            printf("* "); 
        }  
        printf("\n");  
    }  

    
    for (int i = rows - 1; i >= 1; i--) {  
       
        for (int j = rows; j > i; j--) {  
            printf("  ");  
        }  
        
        for (int j = 1; j <= i; j++) {  
            printf("* "); 
        }  
        printf("\n");  
    }  

    return 0;  
}  