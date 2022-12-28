#include<stdio.h>
int Square(int n)
{
	return n*n;
}
int main()
{
	int x;
	printf("Enter a numbers\n");
	scanf("%d",&x);
	printf("Square is = %d ",Square(x));
	return 0;
}
