#include<stdio.h>
int main ()
{
	int i;
	char s[11];
	int letter=0 , blank=0 , digit=0 , other=0 ;

	for(i=0;i<=10;i++)
	{
		s[i]=getchar();
		
	}
	
	for(i=0;i<=10;i++)
	{
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
		letter++;
		else if(s[i]==' '||s[i]=='\n')
		blank++;
		else if(s[i]>='0'&&s[i]<='9')
		digit++;
		else
		other++;
	}

	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank-1,digit,other);
	
	
	return 0;
}
