#include<stdio.h>
#include<limits.h>
int main()
{
int i,n;
printf("Enter the number of elememnts");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
    printf("\n Enter the element %d\n",i+1);
	scanf("%d",&arr[i]);
}
int max=INT_MIN;
int min=INT_MAX;

for(int i=0 ; i<n ; i++){
    
    if(arr[i] > max){
        max = arr[i];
    }
}
for(int i=0 ; i<n ; i++){
    
    if(arr[i] < min){
        min = arr[i];
    }
}

printf("max value =%d  min value =%d",max , min);
	return 0;
}
