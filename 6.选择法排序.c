//ѡ������ 
#include<stdio.h>
int main ()
{
	int a[20]={0} ;
	int i , j ;
	int h;
	scanf("%d",&h);
	for(i=0;i<h;i++)
	scanf("%d",&a[i]); 
	for(i=0;i<h;i++)
	{
		for(j=0;j<h;j++)
		{
			if(a[j]<a[i])//���ں�--��С����С�ں�--�Ӵ�С 
			{
				int temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<h;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0;
 } 
