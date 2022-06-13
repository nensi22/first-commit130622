#include<stdio.h>
int main()
{
      int i,n,a=0,b=1,c;
      printf("n=");
      scanf("\t %d",&n); 
      printf("%d",a);
      printf("%d",b);
      for(i=0;i<=n;i++) 
      {
        c=a+b;
        printf("\t %d",c); 
	a=b;
	b=c;
      }
      return 0;	                                                                                                                                                                                                                                                                            
         


}