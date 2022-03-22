#include <stdio.h>//多个空格也可以 
int main()
{
	char ch[1000];
	char c;
	int i,word = 0,num = 0;
	gets(ch);
	for(i = 0;(c = ch[i]) != '\0';i++){
		if(c == ' ')
		word = 0;
		else if(word == 0){
			word = 1;
			num++;
		}
	}
	printf("%d",num);
	
	return 0;
}

