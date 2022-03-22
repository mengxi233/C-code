#include<stdio.h>
int main ()
{
	int n,x,i,j,a[25],flag=0;
	scanf("%d%d",&n,&x);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
	for(i=0;i<n;i++)
	if(x==a[i])
	{
		printf("%d",i);
		flag=1;
	}
	if(flag==0)
	printf("Not Found");
	
	
	return 0;
}
