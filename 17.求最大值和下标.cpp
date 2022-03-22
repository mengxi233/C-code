#include<stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int i,a[20];
	int max;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);	
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==max)
		break;
	}
	
	printf("%d %d",max,i);
	
	
	
	
	
	return 0;
 } 
