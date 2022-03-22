#include<stdio.h>
#include<string.h>

int main ()
{
	char s[85];
	gets(s);
	int i;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		s[i]='A'+'Z'-s[i];	
		
	}
	puts(s);
	
	
	
	return 0;
}
