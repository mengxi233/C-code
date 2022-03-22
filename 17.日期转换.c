#include<stdio.h>

int main ()
{
	int year,month,day,today=0,leap;
	scanf("%d%d%d",&year,&month,&day);
	 
	int a[2][13]={
	{0,31,28,31,30,31,30,31,31,30,31,30},//闰年 
	{0,31,29,31,30,31,30,31,31,30,31,30}}; //平年 
	
	if((year%4==0&&year%100!=0)||year%400==0)
	leap=1;//1为闰年 
	else
	leap=0;//0为平年 
	
	today=day;
	while(month>1)
	{
		today=today+a[leap][month];
		month--;
	}
	
	printf("%d",today);
	return 0;
}

