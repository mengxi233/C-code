#include<stdio.h>
int getCount(int n);
int main ()
{
	int j,i,temp,temp2,s[20],count[i];
	for(i=0;s[i-1]!=-1;i++)
	scanf("%d",&s[i]);
	int f=i-1;//f是输入的个数 
	
	for(i=0;s[i]!=-1;i++)
	count[i]=getCount(s[i]);
	
	for(i=0;i<f;i++)
		for(j=i+1;j<f;j++)
		{
			if(count[i]<count[j])
			{
			temp=count[i];
			temp2=s[i];
			s[i]=s[j];
			count[i]=count[j];
			s[j]=temp2;
			count[j]=temp;
			}
			
		}
	int mx=0;
	for(i=0;i<f;i++)
	{
		if(count[i]==count[0])
		mx=i;
	}
	printf("%d %d",s[mx],count[mx]);
	
	return 0;
}
int getCount(int m)
{
	int i,count=0;
	for(i=1;i<=m;i++)
	{
		if(m%i==0)
		count++;
	}
	return count;
}
