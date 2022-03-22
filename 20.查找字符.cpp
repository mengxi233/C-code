#include<stdio.h>
#include<string.h>
int main ()
{
	char ch;
	char a[80];
	scanf("%c",&ch);
	getchar();
	gets(a);
	int index=-1,i;
	
	/*for(i=0;i<strlen(a);i++)
	if(a[i]==ch)
	{
		printf("index = %d",i+1);
		return 0;
	}
	printf("Not Found");*/
	
	for( i=0;a[i]!='\0';i++)	
		if(a[i]==ch)	
			index=i;
	if(index==-1)
		printf("Not Found\n");
	else
		printf("index = %d\n",index);


	
	
	
	
	
	
	
	
	
	
	
	return 0;
 } 
