#include<stdio.h>
int dectobin(int n);
int main ()
{
	int n;
	scanf("%d",&n);
	dectobin(n);
	
	return 0;
}
int dectobin(int n)
{
	if(n>=2)
	dectobin(n/2);
	printf("%d",n%2);
 } 
