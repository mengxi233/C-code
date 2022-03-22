#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int n,*p,sum=0,i,j;
	scanf("%d",&n);
	
	p=(int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));	
	}
	double average=0,max=p[0],min=p[0];
	for(i=0;i<n;i++)
	average=average+p[i];
	average=average/n;
	for(i=0;i<n;i++)
	if(p[i]>max)
	max=p[i];
	for(i=0;i<n;i++)
	if(p[i]<min)
	min=p[i];
	printf("average = %.2lf\nmax = %.2lf\nmin = %.2lf",average,max,min);
	
	
	return 0;
}
