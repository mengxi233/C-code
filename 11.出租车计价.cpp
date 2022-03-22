#include<stdio.h>
int main ()
{
	double s,sum=0;
	int time;
	scanf("%lf %d",&s,&time);
	if(s==0)
	sum=0; 
	
	if(s<=3&&s>0)
	sum=10;
	
	if(s>3&&s<=10)
	sum=10+(s-3)*2;
	
	if(s>10)
	sum=10+14+3*(s-10);
	
	if(time>=5)
	{
		if(time%5==0)
		sum=sum+time/5*2;
		else
		sum=sum+time/5*2;
	 } 
	if(sum-(int)(sum)>=0.5)
	sum++;
	int d=(int)(sum);
	printf("%d",d);
	
	
	
	
	
	return 0;
}
