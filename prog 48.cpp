#include <stdio.h>  

// Recursive function to perform linear search  
int linearSearch(int arr[], int n, int key, int index) {  
    // Base case: if the index reaches n, the key is not found  
    if (index >= n) {  
        return -1; // Key not found  
    }  
    // If the key is found at the current index, return the index  
    if (arr[index] == key) {  
        return index;  
    }  
    // Recur for the next index  
    return linearSearch(arr, n, key, index + 1);  
}  

int main() {  
    int n, key;  

 
    printf("Enter the number of elements in the array: ");  
    scanf("%d", &n);  

    int arr[n];  
    printf("Enter the elements of the array:\n");  
    for (int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }  
   
    printf("Enter the element to search for: ");  
    scanf("%d", &key);  
    int result = linearSearch(arr, n, key, 0);  
 
    if (result != -1) {  
        printf("Element %d found at index: %d\n", key, result);  
    } else {  
        printf("Element %d not found in the array.\n", key);  
    }  

    return 0;  
}  