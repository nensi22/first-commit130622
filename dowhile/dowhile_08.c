#include<stdio.h>
int main()
{
	int i=1,n;
	printf("n=");
	scanf("%d",&n);
	do
	{
	   if(i%2==0)
	   {
	     printf("\n %d",i*i);
	      i++; 
	   }
	    else
	    {
              printf("\n %d",i);
              i++;
	     }
	  }while(i<=n);
          return 0;
}
	     	  