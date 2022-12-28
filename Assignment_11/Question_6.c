#include<stdio.h>

void prime_btwn2(int x,int y)
{
	int n,i;
 printf("Prime number between %d and %d \n",x,y);	
  for(n=x+1;n<y;n++)
   	{
	 for(i=2;i<=n/2;i++)
	    if(n%i==0) 
    	    break;
	    if(i==n/2+1)
	       printf("%d ",n);
    }
}
int main()
{
	int a,b;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	prime_btwn2(a,b);
}
