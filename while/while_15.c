#include<stdio.h>
int main()
{
	int i=1,j,n=1;
	while(i<=5)
	{
	   j=1;
	  while(j<=5)
	  {
	    printf("\t %d",n++);
	    j++;
	   }
	 printf("\n");
	 i++;
	}
	return 0;
}