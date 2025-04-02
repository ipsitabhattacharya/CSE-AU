#include<stdio.h>
int main()
{
	int matrix2[3][3],transpose[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
	
	for(j=0;j<3;j++)
	{
		scanf("%d",&matrix2[i][j]);
	}
	
	}
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
			{
				transpose[j][i]=matrix2[i][j];
				
			}
}
