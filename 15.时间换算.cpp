#include<stdio.h>
int main ()
{
	int h,m,s,t;
	scanf("%d:%d:%d",&h,&m,&s);
	scanf("%d",&t);
	s=s+t;
	if(s>=60)
	{
		m=m+s/60;
		s=s%60; 
		if(m>=60)
		{
			h=h+m/60;
			m=m%60;
			if(h>=24)
			{
				h=h%24;
				
			}
		}
	}
	int h1,h2,m1,m2,s1,s2;
	if(h==0)
	{
		h1=0;
		h2=0;	
	}
	else
	{
		h1=h/10;
		h2=h%10;
	}
	if(m==0)
	{
		 m1=0;
		 m2=0;
	}
	else
	{
		m1=m/10;
		m2=m%10;
	}
	if(s==0)
	{
		s1=0;
		s2=0;	
	}
	else
	{
		s1=s/10;
		s2=s%10;
	}
	printf("%d%d:%d%d:%d%d",h1,h2,m1,m2,s1,s2);
	
	
	
	
	
	return 0;
 } 
