#include<stdio.h>
void delchar(char *s,char c);
int main ()
{
	char s[30]={0};
	char c;
	gets(s);
	scanf("%c",&c);
	delchar(s,c);
	
	printf("%s",s);
	
	return 0;
}
void delchar(char *s,char c)
{
	int i,j;
	for(i=j=0;s[i]!='\0';i++)
	{
		if(s[i]!=c)
		{
			s[j]=s[i];
			j++;
		}
	 } 	
	s[j]='\0';
}

