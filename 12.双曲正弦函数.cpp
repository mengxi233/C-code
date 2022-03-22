#include<stdio.h> 
#include<math.h>
double fact(int n);
int main ()
{
	double x,e,sum=0;
	scanf("%lf%lf",&x,&e);
	int i=1;
	double flag;
	flag=x;

	while(fabs(flag)>e)
	{
		
		flag=pow(x,2*i-1)/fact(2*i-1);
		sum=sum+flag;
		i++; 
	}
	printf("%.6lf",sum);
	
	return 0;
}
double fact(int n)
{
	double sum=1;
	int i;
	for(i=1;i<=n;i++)
	sum=sum*i;
	return sum;
}
