#include<stdio.h>
void swap(int *x,int *y);
void bubble(int a[],int n);
int main  ()
{
	int  n,a[10];
	int i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	bubble(a,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	return 0;
 } 
 void bubble(int a[],int n)
 {
 	int i ,j ,t,flag=0;
 	for(i=0;i<n;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if(a[j]<a[i])
			{
				swap(&a[j],&a[i]);	
			} 		
		 }
	 }
 	
 }
 
 void swap(int *x,int *y)
 {
 	
 	int t;
 	t=*x;
 	*x=*y;
 	*y=t;
 	
 	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 

