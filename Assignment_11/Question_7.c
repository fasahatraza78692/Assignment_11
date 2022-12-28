#include<stdio.h>
void Nterm_Fibonacci(int n)
{
	int i,x=-1,y=1,z;
	for(i=1;i<=n;i++)
	{
		z=x+y;
		printf("%d ",z);
		x=y;
		y=z;   
	}
}
int main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	Nterm_Fibonacci(x);
}
