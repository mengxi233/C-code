#include<stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int flag =n;
	int weishu=0;
	int sum=0;
	int i;
	while(flag>0)
	{
		weishu++;	
		flag=flag/10;
	}
	for(i=1;i<=weishu;i++)
	{
		sum=sum+n%10;
		n=n/10;
	}
	printf("%d %d",weishu,sum);
	
	
	
	return 0;
}
