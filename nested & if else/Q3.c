#include<stdio.h>
#include<conio.h>

int main()

{
	int a,b,c,d,x,y;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	
	
	if(a<b)
	{
	
		if(a<c)
		{
		   
		   if(a<d)
		   {
		   	
		   	if(a<x)
		   	{
		   		
		   		if(a<y)
		   		{
		   			printf("a is minmum");
				}
				else
				{
					printf("y is minmum");
				}
			}
		   }
		   else
		   {
		   	
		   	if(d<x)
		   	{
		   	
		   		if(d<y)
		   		{
		   			printf("d is minmum");
				} 
				else
				{
					printf("y is minmum");
				}
				
					
		   		 
				   
			}
			else
			{
				
				if(x<y)
				{
					printf("x is minmum");
				}
				else
				{
					printf("y is minmum");
				}
			}
			
		   }
		}
		else
		{
		
		  if(c<d)
		  {
		  	
		  	if(c<x)
		  	{
		  		
		  	 if(c<y)
		  	 {
		  	 	printf("c is minmum");
			 }
			 else
			 {
			  printf("y is minmum");
			 }
			}
		  }
		  else
		  {
		  	
		  	if(d<x)
		  	{
		  		
		  		if(d<y)
		   		{
		   			printf("d is minmum");
				} 
				else
				{
					printf("y is minmum");
				}
		  		
			}
			else
			{
			
				if(x<y)
				{
					printf("x is minmum");
				}
				else
				{
					printf("y is minmum");
				}
			}
		  }
		}
		
	}
	else
	{
		
		if(b<c)
		{
			
			if(b<d)
			{
			
				if(b>x)
				{
					
					if(b>y)
					{
						printf("b is minmum");
					}
					else
					{
						printf("y is minmum");
					}
				}
				else
				{
					
					if(x<y)
					{
						printf("x is minmum");
					}
					else
					{
						printf("y is minmum");
					}
				}
			}
			else
			{
				
				if(d<x)
				{
					
					if(d<y)
					{
						printf("d is minmum");
					}
					else
					{
						printf("y is minmum");
					}
				}
				else
				{
					
					if(x<y)
					{
						printf("x is minmum");
					}
					else
					{
						printf("y is minmum");
					}
				}
			}
		}
		else
		{
			
			if(c<d)
		    {
			
				
		  	if(c<x)
		  	{
		  	
		  	 if(c<y)
		  	 {
		  	 	printf("c is minmum");
			 }
			 else
			 {
			  printf("y is minmum");
			 }
			}
		  }
		  else
		  {
		  
		  	if(d<x)
		  	{
		  		
		  		if(d<y)
		   		{
		   			printf("d is minmum");
				} 
				else
				{
					printf("y is minmum");
				}
		  		
			}
			else
			{
				
				if(x<y)
				{
					printf("x is minmum");
				}
				else
				{
					printf("y is minumu");
				}
		    
		}
			}
		}
	}

}