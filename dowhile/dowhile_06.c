#include<stdio.h>

int main()
{
    int i=1,n=0;
    
    do
    {
	n=i+n;
        i+=2; 
    }while(i<=10);
    printf("odd number total=%d",n);
   return 0;
}