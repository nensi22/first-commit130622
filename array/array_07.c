#include<stdio.h>
int main()
{
	
	int i,a[10],esum=0;
	for(i=0;i<10;i++)	
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	 
	for(i=1;i<10;i++)
	{
	       if(a[i]%2==0)
	       {
		 printf(" \n a[%d]=%d",i,a[i]);
		 esum=esum+a[i];
	        }
	}
		
	      printf("\n even element total=%d",esum);	
	return 0;
} 	
	