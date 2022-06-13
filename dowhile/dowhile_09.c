 #include<stdio.h>
int main()
{
	int i=1,n=1;
	do
	{
	   printf("\t  %d ",i*n);
           i*=2;
	   n++; 
	}while(i<=20);
	 
	return 0;
}