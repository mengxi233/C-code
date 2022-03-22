#include<stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if(n<0)
	printf("sign(%d) = -1",n);
	if(n==0)
	printf("sign(%d) = 0",n);
	if(n>0)
	printf("sign(%d) = 1",n);
	
	
	
	return 0;
}
