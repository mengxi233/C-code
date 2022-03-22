#include<stdio.h>
int main()
{
	int n,m,a[20],b[20],c[40],i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);  
	
	scanf("%d",&m);
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);  
	

	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{  
			if(a[i]==b[j])
			{
				break;
			}
		}
		if(j==m)
		{   
			c[k++]=a[i];  
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{   
				break;
			}
		}
		if(j==n)
		{
			c[k]=b[i];
			k++;
		}
	}	
	printf("%d",c[0]);      
	for(i=1;i<k;i++)
	{       
		for(j=0;j<i;j++)
		if(c[i]==c[j])
		break;
		if(j==i)
		printf(" %d",c[i]);	         
	}
	return 0;
}
