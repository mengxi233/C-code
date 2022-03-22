#include<stdio.h> 
 struct peo{
	char num[10];
	char name[20];
	int score;
	char degare;
};
int main ()
{
	 struct peo s[20];
	 int i,j;
	 int n;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 scanf("%s %s %d",&s[i].num,&s[i].name,&s[i].score);
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(s[i].score>=90)
		{
		s[i].degare='S';	
		flag++;
		}
		if(s[i].score>=80&&s[i].score<=89)
		s[i].degare='A';
		if(s[i].score>=70&&s[i].score<=79)
		s[i].degare='B';
		if(s[i].score<70)
		s[i].degare='C';
	}
		
	for(i=0;i<n;i++)
	printf("%s %s %c\n",s[i].num,s[i].name,s[i].degare);
	printf("%d",flag);
	return 0;
}
