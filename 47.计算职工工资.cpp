#include<stdio.h>
struct stu{
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
		scanf("%s%lf%lf%lf",&s[i].name,&s[i].x,&s[i].y,&s[i].z);
		s[i].sum=s[i].x+s[i].y-s[i].z;
		
	}
	for(i=0;i<n;i++)
printf("%s %.2lf\n",s[i].name,s[i].sum);
	
	
	
	
	
	
	return 0;
}
