#include<stdio.h>
int sum (int n);
int main () 
{
	int n,i;
	scanf("%d",&n);
	printf("%d",  sum(n)) ;

	return 0;
	}
	int sum (int n)
	{
		int i,sum=0;
		while(n>0)
		{
			sum=sum+n%10;
			n=n/10;
		}
		return sum; 
	}
