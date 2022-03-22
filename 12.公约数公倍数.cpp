#include<stdio.h>
int main ()
{
	int a,b,r;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		r=a;
		a=b;
		b=r;
	}
	r=a%b;
	int t=b;
	int s=a;
	while(r)
	{
		a=b;
		b=r;
		r=a%b;
	}
	
	printf("%d %d",b,s*t/b); 
	
	
	
	
	
	
	return 0;
}
