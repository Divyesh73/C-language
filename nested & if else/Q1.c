#include<stdio.h>
#include<conio.h>

int main()

{
    
    int x,y,z;
    
    printf("Enter the value x:");
    scanf("%d",&x);
    printf("Enter the value y:");
    scanf("%d",&y);
    printf("Enter the value z:");
    scanf("%d",&z);
    
    if(x<y)
    {
    	
    	if(x<z)
    	{
    		
    		printf("x is minmum");
		}
		else
		{
			
			printf("z is minmum");
		}
	}
	else
	{
		
		if(y<z)
		{
			
			printf("y is minmum");
		}
		else
		{
			
			printf("z is miumum");
		}
	}
}