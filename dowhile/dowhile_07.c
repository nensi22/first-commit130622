#include<stdio.h>

int main()
{
     int i=0,sum=0,sum1=0;
    do
     {
	if(i%2==0)
	{
	sum=sum+i;
        printf("\n %d",sum); 
	}
	else
	{
	sum1=sum1+i;
	
	printf("\n %d",sum1);
	}i++;
     }while(i<=10);
     printf("\n total even number=%d",sum);
     printf("\n odd total number=%d",sum1);
     printf("\n total number=%d",sum+sum1);

      return 0;

}