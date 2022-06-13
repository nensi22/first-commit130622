#include<stdio.h>
int main()
{
	int i,a[3][3],n,uppertrain=0,lowertrain=0,totaldain=0;
	for(i=0;i<3;i++)
	{
	          for(n=0;n<3;n++)
	          {
		printf("enter  a[%d][%d]=",i,n);
		scanf("%d",&a[i][n]);
 	           }
	 }
	for(i=0;i<3;i++)
	{
	       for(n=0;n<3;n++)
	        {	
		printf("\t%d",a[i][n]);
	        }
	printf("\n");
	}
	for(i=0;i<3;i++)
	{
	      for(n=0;n<3;n++)
 	      {
	      	if(i>n)
	     	{
		         lowertrain+=a[i][n];
		}
	     }
	}
	for(i=0;i<3;i++)
	{
	      for(n=0;n<3;n++)
 	      {
	      	if(i<n)
	     	{
		         uppertrain+=a[i][n];
		}
	     }
	}
	for(i=0;i<3;i++)
	{
	      for(n=0;n<3;n++)
 	      {
	      	if(i==n)
	     	{
		         totaldain+=a[i][n];
		}
	     }
	}
	printf("\n totaldain=%d",totaldain);
	printf("\n upertrain=%d ",uppertrain);
	printf("\n lowertrain=%d",lowertrain);
	return 0;
}