#include<stdio.h>
int main ()
{
	int num ,n,i,flag=0,x;
	scanf("%d %d",&num,&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x<0)
		{
			printf("Game Over");
			return 0;
		}
		if(x>num)
		printf("Too big\n");
		if(x<num)
		printf("Too small\n");
		flag++;
		if(x==num)
		{
			if(flag==1)
			printf("Bingo!");
			if(flag>1&&flag<=3)
			printf("Lucky You!");
			if(flag>3)
			printf("Good Guess!");
			return 0;
		}
	}
	printf("Game Over");
	
	
	
	
	
	return 0;
}
