#include<stdio.h>
#include<stdio.h>

void main()
{
	int n,i;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	int ld=n%10;
	
	while(n>9)
	{
		n=n/10;
	}
	
	printf("The sum of the first and the last digit:%d",n+ld);
}
