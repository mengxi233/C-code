#include<stdio.h> 
#include<math.h>
int main ()
{
	int sum=0, n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(2,i);
	}
	
	printf("result = %d",sum);
	
	return 0; 
}
