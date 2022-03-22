#include<stdio.h> 
int main ()
{
	int T,i,j,k,m,s[10][10],flag=0;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		for(k=0;k<m;k++)
		scanf("%d",&s[j][k]);
		
		for(j=0;j<m;j++)
		for(k=0;k<j;k++)
		if(s[j][k]!=0)
		{
		printf("NO\n");
		flag=1;	
		}
		if(flag==0)
		printf("YES\n");
		
	}
	
	
	
	return 0;
}
