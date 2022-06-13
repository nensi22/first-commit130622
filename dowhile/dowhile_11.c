#include<stdio.h>
int main()
{
	char i=65,n;
	printf("n=");
	scanf("%c",&n);
	do
	{
	   printf(" \t %c %c ",i,i+34);
	    i+=4;
	}while(i<=n);
	return 0;
}      	