#include<stdio.h>
void hanoi (int n,char a,char b,char c);
int count=0;
int main ()
{
	int n;
	scanf("%d",&n);
	hanoi(n,'a','b','c');
	
	printf("%d",count);
	return 0;
}
void hanoi (int n,char a,char b,char c)
{
	count++;
	if(n==1)
	{
		printf("%c-->%c\n",a,b);
	}
	else
	{
		hanoi(n-1,a,c,b);
		printf("%c-->%c\n",a,b);
		hanoi(n-1,c,b,a);
	}
	
}
	
	
	
	
	

