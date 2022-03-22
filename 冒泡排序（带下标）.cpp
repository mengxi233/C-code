//√∞≈›≈≈–Ú
//—°‘Ò≈≈–Ú∑® 
#include<stdio.h>
int main ()
{
	int a[10]={2,3,5,1,9,0,4,7,6,8} ;
	int b[10]={0,1,2,3,4,5,6,7,8,9};
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
				int flag =b[i];
				b[i]=b[j];
				b[j]=flag;
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d ",b[i],a[i]);
		
	}
	
	
	return 0;
 }  
