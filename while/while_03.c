#include<stdio.h>

int main()
{
    int n,n1=10;
    
    printf("n=");
    scanf("\n %d",&n);
    while(n<=n1)
    {
    printf("%d \t",n);
	n++;
    }

    return 0;
}