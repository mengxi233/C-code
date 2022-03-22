#include<stdio.h>
int fact(int n);

int main ()
{
	int n,sum=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+fact(i);
	}
	printf("%d",sum);
	return 0;
}
int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*fact(n-1);
}

