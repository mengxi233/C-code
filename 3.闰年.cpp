#include <stdio.h>
int main ()
{
	int year;
	scanf("%d",&year);
	if(year<=2000||year>2100)
	{
		printf("Invalid year!");
		return 0;
	}
	int i,flag=0;
	for(i=2001;i<=year;i++)
	{
		if((i%4==0&&i%100!=0)||i%400==0)//ÅĞ¶ÏÊÇ·ñÎªÈòÄê 
		{
		printf("%d\n",i);
		flag++;	
		}
	}
	if(flag==0)
	printf("None");
	
	
	
	
	return 0;
 } 
