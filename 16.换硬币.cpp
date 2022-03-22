#include<stdio.h>
int main ()
{
	int money,i,flag=0;
	scanf("%d",&money);
	int fen5,fen2,fen1;
	for(fen5=money;fen5>0;fen5--)
	for(fen2=money;fen2>0;fen2--)
	for(fen1=money;fen1>0;fen1--)
	{
		if(fen5*5+fen2*2+fen1*1==money)
		{	
			flag++;
			printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",fen5,fen2,fen1,fen1+fen2+fen5);	
		}
	}
	printf("count = %d",flag);
	
	
	

	
	return 0;
 } 
