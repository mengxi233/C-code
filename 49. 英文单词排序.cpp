#include<stdio.h>
#include<string.h>
int main()
{
    char str[20][10],t[20],temp[20];
    
    int i=0,j;
    
    while(1)
    {
        scanf("%s",&temp);
        
        if(temp[0]!='#')
        {
            strcpy(str[i],temp);
            i++;
        }
        else
            break;
    }
    int n=i;
    for(i=0;i<n-1;i++)
    
    	for(j=0;j<n-i-1;j++)
	    {
            if(strlen(str[j])>strlen(str[j+1]))
		    {
               strcpy(t,str[j]);
               strcpy(str[j],str[j+1]);
               strcpy(str[j+1],t);
            }
        }
        
    for(i=0;i<n;i++)
	printf("%s ",str[i]);
    
}

