#include<stdio.h>
int main ()
{
	int a[1005], n,i,j,b[1005]={0},c[1005]={0},k;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	b[i]=a[i];
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	if(a[i]==b[j])
	c[i]++;
	
	int max=c[0];
	for(i=0;i<n;i++)
	if(max<c[i])
	max=c[i];
	
	for(i=0;i<n;i++)
	if(max==c[i])
	break;
	
	printf("%d %d",a[i],max);
		
	
		
	
	
	
	
	return 0;
}
