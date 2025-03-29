#include<stdio.h>
#include<math.h>
int main()
{
	float ci,a,r,p,t;
int n;
printf("Enter the final amount is a,intial principal is p\n initial rate is r \n,the number of time interest applied per yer is n ");
scanf("%f %f %d ",&a,&p,&r,&n);
a=p*pow((a+r/(n*100.00))(n*t));
printf("%f",ci);
return 0;

}