#include<stdio.h>
int main()
{
	float f1,f2,c1,c2;
	printf("Enter temperature in farenheit");
	scanf("%f",&f1);
	printf("Enter temperature in celsius");
	scanf("%f",&c1);
	c2=(f1-32)*5/9;
	printf("%f\n %f",c2,f2);
	f2=c1*(9/5)+32;
	return 0;
}