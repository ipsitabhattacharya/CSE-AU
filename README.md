//ASSIGNMENT 26:WRITE A C PROGRAM TO PRINT THE MULTIPLICATION TABLE
source code
#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i<=10;i=i+1)
	{
		printf("%d",num*i);
	}
	return 0;
}
output:
Enter a number5
5101520253035404550
--------------------------------
//ASSIGNMENT 27:
WRITE A C PROGRAM TO PRINT THE SUM OF SQUARE OF FIRST 10 NATURAL NUMBERS
source code
#include<stdio.h>
int main()
{
	int sum,i;

	for(i=1;i<=10;i=i+1)
	{
		sum+=i*i;
	}
	{
	
		printf("%d",sum);
	}
	return 0;
}
OUTPUT:
385
--------------------------------
//ASSIGNMENT 28:
WRITE A C PROGRAM TO PRINT THE SUM OF FIRST 10 ODD NUMBERS
#include<stdio.h>
int main()
{
	int n=0,i;

	for(i=1;i<=20;i=i+1)
	{
	if(i%2!=0)
	n+=i;
	}
	{
	
		printf("%d",n);
	}
	return 0;
}
OUTPUT:
100
--------------------------------
























