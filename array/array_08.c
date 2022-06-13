#include<stdio.h>
int main()
{
	
	int i,a[10],oddsum=0,evensum=0;
	for(i=0;i<10;i++)
	{
		printf("enetr a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
	          if(a[i]%2==1)
	          {
		 			printf("\n a[%d]=%d",i,a[i]);
	    	 		oddsum=oddsum+a[i];
	           }
	           else
	           {
		  			printf("\n a[%d]=%d",i,a[i]);
	   	  			evensum=evensum+a[i];
	           }
	}
		
	          printf("\n odd element total=%d",oddsum);
	          printf("\n even element total=%d",evensum);
	          printf("\n all element total=%d",oddsum+evensum);
	return 0;
}						