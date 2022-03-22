#include<stdio.h>
struct point {
	int b;
	int a;
};
int main ()
{
	struct point x,y;
	scanf("%d %d %d %d",&x.a,&x.b,&y.a,&y.b);
	if(x.a*y.b+x.b*y.a>0)
	printf("%d+%di",x.a*y.a-x.b*y.b,x.a*y.b+x.b*y.a);
	else if(x.a*y.b+x.b*y.a==0)
	printf("%d",x.a*y.a-x.b*y.b);
	else if(x.a*y.b+x.b*y.a<0)
	printf("%d%di",x.a*y.a-x.b*y.b,x.a*y.b+x.b*y.a);
	else if(x.a*y.a-x.b*y.b==0)
	printf("%d",x.a*y.b+x.b*y.a);
	
	
	return 0; 
	
}
