#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping");
	printf("a=%d\n",a);
	printf("b=%d\n",b);	
	return 0;
}