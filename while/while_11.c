#include<stdio.h>
int main()
{
	float i=0.5,a=0.5,n;
	printf("n=");
	scanf("%f",&n);
	while(i<=n)
	{
	
	
	   printf("\t  %.2f",a);
		a+=i;   
	      i++;
 	
	} 
	return 0;
}