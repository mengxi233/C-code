#include<stdio.h>
int main ()
{
	int year1,month1,day1;
	int year2,month2,day2;
	scanf("%d%d%d",&year1,&month1,&day1);
	scanf("%d%d%d",&year2,&month2,&day2);
		
	int a[2][13]={
	{0,31,28,31,30,31,30,31,31,30,31,30},//闰年 
	{0,31,29,31,30,31,30,31,31,30,31,30}}; //平年 
	
	
	int leap1,leap2;
	if((year1%4==0&&year1%100!=0)||year1%400==0)
	leap1=1;//1为闰年 
	else
	leap1=0;//0为平年 
	
	if((year2%4==0&&year2%100!=0)||year2%400==0)
	leap2=1;//1为闰年 
	else
	leap2=0;//0为平年 
	
	int sum=0;
	int i,j;
	if(year1==year2&&month1==month2)
	{
		sum=day2-day1;
	}
	
	if(year1==year2)
	{
		sum=day2;
		for(i=month2;i>month1;i--)
		{
			sum=sum+a[leap2][month2];
		}
	}
	
	if(year1!=year2)
	{
		int flag1=day1;
	while(month1>1)
	{
		flag1=flag1+a[leap1][month1];
		month1--;
	}
		int flag2=day2;
		
	while(month2>1)
	{
		flag2=flag2+a[leap2][month2];
		month2--;
	}
					
		if(leap1=1)
		{
			sum=366-flag1+flag2;	
		}
		else
		sum=365-flag1+flag2;		
	}
	printf("%d",sum-1);
	return 0;
}
