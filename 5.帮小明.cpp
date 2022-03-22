#include<stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int flag=n%4;
	char ch;
	if(flag==0)
	ch='A';
	if(flag==1)
	ch='B';
	if(flag==2)
	ch='C';
	if(flag==3)
	ch='D';
	printf("answer = %c",ch);
	
	
	return 0;
}
