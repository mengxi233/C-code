#include<stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int a[10][10];
	int i,j,sum=0,s=0;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
	sum=sum+a[i][j];	
	}
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(i==n-1||j==n-1||i+j==n-1)
		s=s+a[i][j];
	}
	printf("%d",sum-s);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
