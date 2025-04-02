 #include<stdio.h> int main() { int i,n,k;
  unsigned long long factorial=1;
  printf("Enter n:"); 
  scanf("%d",&n); 
  if(n<0) 
  { 
  printf("n is negative so doesnot exist"); 
  }
   else { for(i=1;i<=n;i++)
   
    { factorial*=i; k=i;
	 }
	  } 
	  printf("factorial of %d=%llu",factorial); 
	  return 0;
	   }