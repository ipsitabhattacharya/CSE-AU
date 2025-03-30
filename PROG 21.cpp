#include<stdio.h>

int main()
{
	float a;
	printf("Enter a ");
	scanf("%f",&a);

	if(a>=0 && a==(int)a)
	{
		printf("WHOLE");
		
	}
	else
	{
		printf("NOT WHOLE");
	}
	return 0;
}