#include<stdio.h>
int main ()
{
	int n,i ,j;
	scanf("%d",&n);
	int a[20];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	
	printf("%d %d",a[n-1],a[0]);
	
	return 0;
 } 
