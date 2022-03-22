#include<stdio.h>
#include<string.h> 
int main ()
{
	int i;

	char a[100];
	
	gets(a);
	
	for(i=strlen(a)-1;i>0;i--)
	printf("%c",a[i]);
	printf("%c",a[0]);
	


	
	
	return 0;
}
