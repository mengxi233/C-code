#include<stdio.h>
int fa(int n);
int main ()
{
	int n;
	scanf("%d",&n);
	printf("%d",fa(n));
	return 0;
}
int fa(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else
	return fa(n-2)+fa(n-1);
}
