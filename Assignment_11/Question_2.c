#include<stdio.h>

int HCF(int a,int b)
{
	int i;
	for(i=a<b?a:b;i>=1;i--)
	 {
	 	if(a%i==0&&b%i==0)
	 	   return i;
	 }
}
int main()
{
	int x,y;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&x,&y);
	printf("HCF = %d",HCF(x,y));
 return 0;
}
