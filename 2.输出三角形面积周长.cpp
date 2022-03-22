#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)//a是最大值
	{
		if(b+c<=a)
		{
		printf("These sides do not correspond to a valid triangle");
		return 0;
		}
	  	
	 } 
	 	if(b>a&&b>c)//b是最大值
	{
		if(a+c<=b)
		{
		printf("These sides do not correspond to a valid triangle");
		return 0;	
		}
	 } 
	 if(c>a&&c>b)//c是最大值
	{
		if(a+b<=c)
		{
		printf("These sides do not correspond to a valid triangle");
		return 0;	
		}
	 } 
	
	double s=(a+b+c)/2.0;
	double area=sqrt(s*(s-a)*(s-b)*(s-c));
	double  p=a+b+c;
	printf("area = %.2lf; perimeter = %.2lf",area,p);
	
	
	
	return 0;
 } 
