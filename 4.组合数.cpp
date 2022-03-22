#include<stdio.h>
double fact(double n);
int main ()
{
	double m,n;
	scanf("%lf%lf",&m,&n);
	printf("result = %.0lf",fact(n)/(fact(m)*fact(n-m))); 
	
	
	return 0;
}
double fact(double n)
{
	double sum=1;
	int i;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	return sum;
}
