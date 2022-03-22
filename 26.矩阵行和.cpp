#include<stdio.h>
int main ()
{
	int m,n,i,sum=0;
	int s[100];
	scanf("%d%d",&m,&n);
	for(i=0;i<n*m;i++)
	 scanf("%d",&s[i]);
	for(i=0;i<m*n;i++)
	{
		sum=sum+s[i];
		if((i+1)%n==0)
		{
			printf("%d\n",sum);
			sum=0;
		}
	}
	
	
	
	
	return 0;
}
