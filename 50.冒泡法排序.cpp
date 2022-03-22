#include<stdio.h>
int main ()
{
	int m,n,i,j,temp,a[150]={0};
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<m;i++)
	for(j=0;j<n-1;j++)
	{
		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	printf("%d",a[i]);
	
	
	
	return 0;
}
