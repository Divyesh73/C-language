#include<stdio.h>
#include<conio.h>

int main()

{

	int a,b,c,d;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	
	
	if(a>b)
	{
		
	    if(a>c)
	    {
	      
		  if(a>d)
		  {
		  
		  	printf("a is maxmum");
		  }
		  else
		  {
		  
		  	printf("d is maxmum");
		  }
		}
		else
		{
		 
		 if(c>d)
		 {
		 
		 	printf("c is maxmum");
		 }
		 else
		 {
		    
		 	printf("d is maxmum");
		 }
		}
	}
	else
	{
		
		if(b>c)
		{
		
			if(b>d)
			{
				
				printf("b is maxmum");
			}
			else
			{
			
				printf("d is maxmum");
			}
		}
		else
		{
			
			if(c>d)
			{
				
				printf("c is maxmum");
			}
			else
			{
				
				printf("d is maxmum");
			}
		}
	}
}