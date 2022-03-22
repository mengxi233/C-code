#include<stdio.h>

int main()
{
	double i=1;
	double eps,sum=0,flag=1;
	scanf("%le", &eps);
	while(flag>=eps)
	{
		sum = sum + flag;
		flag = flag * i/(2*i+1);
		i = i + 1;
	}
	sum = sum + flag;
	printf("PI = %.5f",2*sum);
	return 0;
}

