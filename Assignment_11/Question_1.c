#include<stdio.h>

int LCM(int a,int b)
{
	int i;
	for(i=a>b?a:b;i<=a*b;i++)
	  if(i%a==0&&i%b==0)
	      return i;
}
int main()
{
	int x,y;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&x,&y);
	printf("LCM = %d",LCM(x,y));
 return 0;
}
