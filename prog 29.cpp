 #include<stdio.h> 
 int main()
  { 
  int a=0,b=1,n,s=0,i; 
  printf("Enter n:");
   scanf("%d",&n); 
   if(n<0)
    {
	 printf("n is negative"); 
	 } 
	 else 
	 {
	  for(i=1;i<=n;i++)
	   { 
	   printf("%d\n",a); 
	   
	   n=a+b; a=b; b=s; 
	   } 
	   } 
	   return 0;
	    } 