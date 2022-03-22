#include<stdio.h>
int main ()
{
	int n,i,j,a[15];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int max=a[0],min=a[0];
	for(i=0;i<n;i++)
	{
		
		if(min>=a[i])
		min=a[i];
	}
//	printf("%d %d\n",max,min);
	int big=0;
	int small=0;
	for(i=0;i<n;i++)
	{
		if(min==a[i])
		small= i;
	}
//	printf("%d %d \n",big ,small);
	int temp=a[small];
	a[small]=a[0];
	a[0]=temp;
	for(i=0;i<n;i++)
	{
		
		if(max<=a[i])
		max=a[i];
	}
	
	
	
	for(i=0;i<n;i++)
	{
		if(max==a[i])
		big= i;
	}
	int flag=a[big];
	a[big]=a[n-1];
	a[n-1]=flag;
	for(i=0;i<n;i++)
	printf("%d",a[i]);	
	
	
	
	return 0;
}
