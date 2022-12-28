#include<stdio.h>
int fact(int n)
{
	int i,res=1;
	for(i=1;i<=n;i++)
	  res=res*i;
	return res;
}
void PASCAL(int n)
{
	int i,j,pas;
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i-1);j++)
		  printf("  ");
		for(j=0;j<=i;j++)
		 {
		 	pas=fact(i)/(fact(j)*fact(i-j));
		 	printf("%2d  ",pas);
		 }
	    printf("\n");
	}
}
int main()
{
	int x;
	printf("Enter number of rows\n");
	scanf("%d",&x);
	PASCAL(x);
	return 0;
}
