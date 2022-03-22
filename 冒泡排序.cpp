//√∞≈›≈≈–Ú
//—°‘Ò≈≈–Ú∑® 
#include<stdio.h>
int main ()
{
	int a[10]={2,3,5,1,9,0,4,7,6,8} ;
	int i , j ;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[j]>a[i])
			{
				int temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0;
 }  
