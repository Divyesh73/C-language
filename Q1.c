#include<stdio.h>
#include<conio.h>

int main()
{

int i=1,n,fact=1;

    printf("Enter n : ");
    scanf("%d",&n);
    
    while(i<=n)
    {
        fact=fact*i;
    	i++;
	}
	printf("%d",fact);
}
