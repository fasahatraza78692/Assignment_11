#include<stdio.h>

int Next_prime(int n)
{
	n++;
	while(n!=0)
	{
		int i;
	    for(i=2;i<=n/2;i++)
	    if(n%i==0) 
			break;
	    if(i==n/2+1)
		 return n;
		 n++;
	}
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Next prime = %d",Next_prime(n));
	return 0;
}
