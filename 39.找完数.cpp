#include<stdio.h>
int main ()
{
  int m,n,i,j,flag=0,sum;
  
  scanf("%d%d",&m,&n);
  
  for(i=m;i<=n;i++)		//遍历m到n 
  {
  	sum=0;
  	for(j=1;j<i;j++)	//判断是否为完数 
  	{
  		
  		if(i%j==0)
		  {
		  	sum=sum+j;
			} 
		}
  		if(i==sum)
  		{
  			flag=1;
  			printf("%d = 1",sum);
  			int k;
  			
  			for(k=2;k<j;k++)
  			if(i%k==0)
  			printf(" + %d",k);
  				printf("\n");
  		
		  }
  		
	  }
	  
  	
  
  	if(flag==0)
	  printf("None");
  
  
  return 0;
}
