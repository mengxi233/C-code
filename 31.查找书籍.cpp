#include <stdio.h>
struct book
{
    char a[31];
    double  b;
};
int main()
{
  int n,i,max=0,min=0;
    double temp;
    struct book m[10];
    
    
    scanf("%d",&n);
	getchar();
	
	
    for(i=0;i<n;i++)
    {
        gets(m[i].a);
        scanf("%lf",&m[i].b);
		getchar();
    }
    for(i=1,temp=m[0].b;i<n;i++)
    {
        if(m[i].b>temp)
        { max=i;
        temp=m[i].b;}
    }
    
    for(i=1,temp=m[0].b;i<n;i++)
    {
        if(m[i].b<temp)
        { min=i;
        temp=m[i].b;}
    }
    printf("%.2lf, %s\n",m[max].b,m[max].a);
     printf("%.2lf, %s",m[min].b,m[min].a);
    return 0;
}

