#include<stdio.h> 
int main ()
{
	int  m,n;
	scanf("%d %d",&m,&n);
	int s[15][15];
	int i,j;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&s[i][j]);
	int max;
	for(i=0;i<m;i++)
	{
		max=s[i][0];
		for(j=0;j<n;j++)
		{
			if(max<s[i][j])
			max=s[i][j];
		}
		printf("%d\n",max);
	}
		
	
	
	
	
	return 0;
}
