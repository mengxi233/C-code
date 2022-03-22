#include <stdio.h>
int main ()
{
    
    
    
    int m , n ,a , b ,f ;
    scanf("%d %d",&a,&b);
    m=a;
    n=b;
    while(b!=0)
    {
    	f=a%b;
    	a=b;
    	b=f;
    	
	}
    printf("%d \n%d\n",a,m*n/a);
    
    return 0;
}
