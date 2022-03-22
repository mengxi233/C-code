#include<stdio.h>
struct stu{
	char num[15];
	char name[15];
	double  x,y,z,sum;
	
	
};
int main ()
{
	struct stu s[10000];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s%lf%lf%lf",&s[i].num,&s[i].name,&s[i].x,&s[i].y,&s[i].z);
		s[i].sum=s[i].x+s[i].y+s[i].z;
	}
	int max=0;
	for(i=0;i<n;i++)
	if(max<s[i].sum)
	max=s[i].sum;
	
	for(i=0;i<n;i++)
	if(max==s[i].sum)
	printf("%s %s %.0lf",s[i].name,s[i].num,s[i].sum);

	
	
	
	
	
	
	return 0;
}
