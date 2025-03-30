#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,c2,f,f2;
	printf("Enter a positive number");
	scanf("%d",&a);
	printf("Enter a negative number");
	scanf("%d",&b);
	c=ceil(a);
	printf("The ceil value:%d\n",c);
	c2=ceil(b);
	printf("The ceil value is%d\n",c2);
	f=floor(a);
		printf("The floor value is%d\n",f);
		f2=floor(b);
			printf("The floor value is%d\n",f2);
			return 0;
}