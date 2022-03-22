#include<stdio.h>
int main()
{
	int s[1000];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	int A=0,B=0,C=0,D=0,E=0;
	for(i=0;i<n;i++)
	{
		if(s[i]>=90)
		A++;
		if(s[i]<90&&s[i]>=80)
		B++;
		if(s[i]<80&&s[i]>=70)
		C++;
		if(s[i]<70&&s[i]>=60)
		D++;
		if(s[i]<60)
		E++;
	}
	printf("%d %d %d %d %d",A,B,C,D,E); 
	
	
	
	return 0;
 } 
