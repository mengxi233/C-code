#include<stdio.h>
int gys(int a , int b);
int main ()
{
  int a,b,r;
  scanf("%d %d",&a,&b);
  printf("%d",gys(a,b));
  return 0;
}
int gys(int a,int b)
{
  int r,t;
  if(a<b)
  {
	t=a;
	a=b;
	b=t;
  }//aΪ�ϴ�ֵ��bΪ��Сֵ 
  r=a%b;
  
  while(r!=0)
  {
	a=b;
	b=r;
	r=a%b;
  }
  return b;
}
