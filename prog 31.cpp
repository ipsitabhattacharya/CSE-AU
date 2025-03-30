#include <stdio.h>  

int main() 
{  
    int n, t1 = 0, t2 = 1, nextTerm = 0;  

  
    printf("Enter the number of terms: ");  
    scanf("%d", &n);  

    printf("Fibonacci Series: ");  

    for (int i = 1; i <= n; i++) 
	{  
        if (i == 1)
		 {  
            printf("%d, ", t1);  
        }
		 else if (i == 2) 
		 {  
            printf("%d, ", t2);  
        }
		 else 
		{  
            nextTerm = t1 + t2; 
            printf("%d", nextTerm);  
            if (i != n)
			 {          
                printf(", ");  
            }  
            t1 = t2;           
            t2 = nextTerm;  
        }  
    }
}