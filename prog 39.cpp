#include <stdio.h>  

int main() {  
    int rows = 4; 


    for (int i = 1; i <= rows; i++) {  
      
        for (int j = 1; j <= 3; j++) {  
            printf("%d", i);  
        }  
        printf("\n");  
    }  

    return 0;  
}  