#include<stdio.h>
int fact(int x)
{
	int i,a=1;
	for(i=x;i>=1;i--)
	   a=a*i;
	return a;
}
int Series_Sum(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
		sum=sum+(fact(i))/i;
	return sum;
}
int main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	printf("Sum = %d",Series_Sum(x));
	return 0;
}
