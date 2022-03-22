#include<stdio.h>
#include<math.h>
void judge (int i);
int count=0;
int main ()
{
	int i,n,flag;
	scanf("%d",&n);
	for(i=101;i<=n;i++)
	{
		judge(i);
	}
	printf("%d",count);
	return 0;
 }
 void judge (int i)
 {
 	int x=sqrt(i);
 	if(x==sqrt(i))
 	{
 		int a,b,c;
 		a=i%10;
 		int temp=i/10;
 		b=temp%10;
 		temp=i/100;
 		c=temp%10;
 		
 		if(((a==b)&&b!=c)||((a==c)&&(c!=b))||(b==c)&&(a!=b))
 		count++;
	 }
 	
 	
 	
} 
