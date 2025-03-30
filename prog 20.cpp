#include<stdio.h>
#include<math.h>
int main()
{
	char a;
	printf("Enter a ");
	scanf("%c",&a);

	if(a=='HEAD')
	{
		printf("HEAD");
		
	}
	else
	{
		printf("TAIL");
	}
	return 0;
}