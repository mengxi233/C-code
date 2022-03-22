#include<stdio.h>
#include<string.h>
int main ()
{
	char s[35];
	int i=0;
	gets(s);
	
		for ( i = 0; s[i] != '#'; i++)
	 {
	  if (s[i] >= 'A'&&s[i] <= 'Z')
	  s[i] += 32;
	  
	  else if (s[i] >= 'a'&&s[i] <= 'z')
	  s[i] -= 32;
	  
	 }
	
	for(i=0;i<strlen(s)-1;i++)
	printf("%c",s[i]);

	return 0;
}
