#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping\n");
	printf("a=%d\n",a);
	printf("b=5d\n",b);
	return 0;
}