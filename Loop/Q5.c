#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int n;
	
	printf("Enter your n:");
	scanf("%d",&a);
	
	printf("Enter your n:");
	scanf("%d",&n);
	
	while(a<=n)
	
	{
		if(a%4==0)
		printf("%d\n",a);
		a++;
	}
}
