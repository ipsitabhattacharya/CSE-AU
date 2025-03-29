#include<stdio.h>
int main()
{
	int a;
	printf("Emnter a number");
	scanf("%d",&a);
	int b=a-(a/10)*10;
	printf("%d",b);
	return 0;
}