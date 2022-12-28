#include<stdio.h>
void N_primeNum(int n)
{
	int i,j=1,count=1;

	  while(count<=n)
	  {
	  	
	  	 for(i=2;i<=j/2;i++)
	    if(j%i==0) 
			break;
	    if(i==j/2+1){
	    	printf("%d ",j);
		     count++;
		}
	     j++;  	
	  }

}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("First %d Prime numbers = ",n);
	N_primeNum(n);
	return 0;
}
