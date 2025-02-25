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
//ASSIGNMENT 29:
WRITE A C PROGRAM TO CHECK WHETHER A NUMBER IS PRIME OR NOT.
SOURCE CODE:
#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,c;
	printf("Enter a number");
	scanf("%d",&num);
	
	

	for(i=1;i<=sqrt(num);i=i+1)
	{
		printf("i=%d\n",i);
		
	if(num%i==0)
	
	{
		c=c+1;
		
	}
	}
	if(c==0)
	{
	
		printf("PRIME");
	}
	else
	{
		printf("not prime");
	}
	return 0;
}
Output:
Enter a number45
i=1
i=2
i=3
i=4
i=5
i=6
not prime
--------------------------------
//ASSIGNMENT 30:
WRITE A C PROGRAM TO FIND THE FACTORIAL OF A NUMBER


























