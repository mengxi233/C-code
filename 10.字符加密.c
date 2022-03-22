#include<stdio.h>
int main ()
{
	int n;
	char s[50]={0},t[50]={0};
	scanf("%d",&n);
	scanf("%s",&s);
	int i=0;
	while(s[i]!='\0')
	{
		t[i]=s[i]+n;
		i++;
	}
	
	printf("%s",t);
	
	return 0;
}
