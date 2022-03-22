#include<stdio.h>
#include<string.h>
int main ()
{
	char s[85],ch;
	gets(s);
	//getchar();
	scanf("%c",&ch)	;
	int i,flag=0;
	for(i=0;i<strlen(s);i++)
	if(ch==s[i])
	flag++;
	printf("%d",flag);
	
	return 0;
}
