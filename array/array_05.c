#include<stdio.h>
int main()
{
	
	int a[10],evensum=0,i;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i+=2)
	{
	        	
	      	printf("\n a[%d]=%d",i,a[i]);
		
		evensum=evensum+a[i];
	        
	}	
	         printf("\n even possition elemetnt total=%d",evensum);
					
	
	return 0;
} 	 		