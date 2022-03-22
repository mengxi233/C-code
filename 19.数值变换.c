#include <stdio.h>
int main()
{
	int num,count=0,sum=0,digit;

	//printf("Enter a number:");
	scanf("%d",&num);
	
	if(num>999)
	{
		printf("-1");
		return 0;
	 } 
	if(num<0)
	num= -num;
	
	else if(num==0)
	count = 1;
	
	else
	{
	
		do
		{
			count++;
			digit=num%10;
			sum=sum*10+digit;
			num=num/10;
		}while(num>0);
	}  
	printf("%d",sum);
	
	
	
	
	return 0 ;
	
}
