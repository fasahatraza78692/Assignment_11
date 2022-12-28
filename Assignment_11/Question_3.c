#include<stdio.h>

int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	  	if(n%i==0) 
			break;
	    if(i==n/2+1)
	       return 1;
	    else
	       return 0;
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(prime(n))
	 printf("Prime");
	else
	 printf("Not Prime");
 return 0;
}
