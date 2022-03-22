/*1. 字符串排序
【问题描述】读入5个字符串，按由大到小的顺序输出。

【输入形式】输入为由空格分隔的5个非空字符串，每个字符串不包括空格、制表符、换行符等空白字符，长度小于80。

【输出形式】排序后的字符串每个占一行
【样例输入】

red yellow blue black white

【样例输出】

yellow

white

red

blue

black*/
#include<stdio.h>
#include<string.h>
int main ()
{
  int i,j;
  char ch[5][100]={0};
	for(i=0;i<5;i++)
	{
		scanf("%s",&ch[i]);
	  }  
	  
   for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(ch[i],ch[j])>0)
			{
				char t[100];
				strcpy(t,ch[i]);
				strcpy(ch[i],ch[j]);
				strcpy(ch[j],t);
			}
		}
	}
  
  for(i=0;i<5;i++)
  printf("%s\n",ch[i]);
  return 0;
}

