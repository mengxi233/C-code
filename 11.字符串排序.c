/*1. �ַ�������
����������������5���ַ��������ɴ�С��˳�������

��������ʽ������Ϊ�ɿո�ָ���5���ǿ��ַ�����ÿ���ַ����������ո��Ʊ�������з��ȿհ��ַ�������С��80��

�������ʽ���������ַ���ÿ��ռһ��
���������롿

red yellow blue black white

�����������

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

