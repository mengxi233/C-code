/*求一批整数中出现最多的数字*/ 
#include<stdio.h> 
int main(void)
{ 
	int n,i,max=0,temp,a[10]={0}; 
	
 	scanf("%d",&n); 
 	 
	for(i=0;i<n;i++)
	{
    	scanf("%d",&temp);
		 for(;temp!=0;)
		 { 
	 		a[temp%10]++;
      		temp/=10;
   		 }
  }
   for(i=0;i<10;i++)
  { 
 	 if(max<a[i])
        max=a[i];
    }
	 int j;
	 for(j=0;j<10;j++);
	 for(i=0;i<10;i++) 
	 if(a[i]==max) 
	 printf("%d ",i); 
	 printf("\n"); 
	 
	 return 0;
}

