#include<stdio.h>
int main ()
{
	int n,r,i,j,a[15];
	
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n+1;i++)
	for(j=i;j<n+1;j++)
	if(a[i]>a[j])
	{
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	
	for(i=0;i<=n;i++)
	printf("%d ",a[i]);
		
	
	
	return 0;
}
