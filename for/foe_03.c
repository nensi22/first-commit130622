#include<stdio.h>
int main()
{
	int i,n=0;
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   if(i%2==0)
	   {
	     printf("\n %d",i*i); 
	   }
	    else
	    {
              printf("\n %d",i);
	     }
	  }
          return 0;
}
	     	  