#include <stdio.h>  
int main()  
{  
    int a[6][6],n;  
    scanf("%d",&n);  
    int i,j,k=0,y=0,flag=1,p=0;  
    for(i=0; i<n; i++)  
    for(j=0; j<n; j++)  
    scanf("%d",&a[i][j]);  
	        
    if(n==1)  
     printf("0 0");
    else  
    {  
        for(i=0; i<n; i++)  
        {  
            y=i;  
            for(p=0; p<n; p++)
            {  
                if(a[i][k]<=a[i][p]) 
                 k=p;   
            }  
            for(j=0; j<n; j++)
            {  
                if(a[y][k]>a[j][k]) 
                {  
                    y=j;  
                    break;  
                }  
            }  
            if(i==y)
            {  
                flag=0;  
                break;  
            }  
        }  
        if(flag==0)  
            printf("%d %d",i,k);  
        else 
			printf("NONE");  
    }  
    return 0;  
}  
