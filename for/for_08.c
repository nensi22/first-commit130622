#include<stdio.h>
int main()
{
	int i,n=1;
	for(i=1;i<=20;i*=2,n++)
	{
	   printf("\t  %d ",i*n);
	}
	 
	return 0;
}