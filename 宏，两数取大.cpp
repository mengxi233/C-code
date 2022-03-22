#include<stdio.h>
#define MAX(a,b) a>b? a:b
int main ()
{
	int x,y,z;
	scanf("%d %d",&x,&y);
	z=MAX(x,y);
	printf("%d\n",z);
	
	return 0;
}
