#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	printf("Enter the value x:");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("This number is Neutral");
	}
	else if(a<=0)
	{
		printf("This number is Negative");
	}
	else if(a>=0)
	{
		printf("This number is Positive");
	}
}
