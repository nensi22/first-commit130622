#include<stdio.h>
int main()
{
	
	int i,a[10],osum=0;
	for(i=0;i<10;i++)	
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	 
	for(i=0;i<10;i++)
	{
	       if(a[i]%2==1)
	       {
		 printf("\n a[%d]=%d",i,a[i]);
		 osum=osum+a[i];
	        }
	}
		
	      printf("\n odd element total=%d",osum);	
	return 0;
} 	
	