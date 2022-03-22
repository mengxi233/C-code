#include<stdio.h>
#include<math.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int i,sum=0;
	for(i=1;i<=3;i++)
	{
		sum=sum+n%10*pow(10,(3-i));
		n=n/10;
	}
	
	printf("%d",sum);
	
	return 0;
}
