#include <stdio.h>  

int main() 
{  
    char alphabet;  

    printf("Enter a single alphabet: ");  
    scanf(" %c", &alphabet);    


 
  
        if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' ||   
            alphabet == 'O' || alphabet == 'U' ||alphabet == 'a' || alphabet == 'e' || alphabet == 'i' ||   
                alphabet == 'o' || alphabet == 'u')
			{  
            printf("%c is a vowel.\n", alphabet); 
		}
       else 
			{  
                printf("%c is a consonant.\n", alphabet);  
            }  
        }
     