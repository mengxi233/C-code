#include<stdio.h>
#include<math.h>

int main()
{
	double e;
	
	int n = 0;
	double temp = 0,d = 1,pi = 1,q;
	scanf("%lf",&e);
	
	while(fabs(d) >= e)
	{
		q = pi;//��һ����pi 
		n++;
		temp = 2*n*1.0/(2*n*1.0-1)*2*n*1.0/(2*n*1.0+1);
		pi *= temp;//��һ����pi 
		d = 2*(pi - q);//��ֵ��d 
	}
	printf("%d",n);
	return 0;
}

