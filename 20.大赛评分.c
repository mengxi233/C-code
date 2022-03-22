#include<stdio.h>
int main ()
{
	int a[50];
	int i,n,j;
	scanf("%d",&n);
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
	
	double sum=0,average;
	
	for(i=2;i<n-2;i++)
	sum=sum+a[i];
	
	average=1.0*sum/(n-4);
	
	printf("%.2lf",average);
	
	return 0;
 } 
