#include<stdio.h>
int main ()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int h1,h2,m1,m2;
	h1=a/100;
	h2=b/100;
	m1=a-100*h1;
	m2=b-100*h2;
	int hour,min;
	if(m2-m1<0)
	{
		min=60+m2-m1;
		hour=h2-h1-1;
	}
	if(m2-m1>=0)
	{
		min=m2-m1;
		hour=h2-h1;
	}
	
	/*if(hour>=10&&min>=10)
	printf("%d:%d",hour,min);
	if(hour<10&&min>=10)
	printf("0%d:%d",hour,min);
	if(hour<10&&min<10)
	printf("0%d:0%d",hour,min);*/
	
	printf("%02d:%02d",hour,min);
	return 0;
}
