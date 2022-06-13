#include<stdio.h>
int main ()
{
    int i=2,n=0;
   
     while(i<=10)
    {
	n=i+n;
	i+=2;
    }
    printf("even number total=%d",n);
   return 0;
}