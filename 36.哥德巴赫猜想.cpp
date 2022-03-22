# include<stdio.h>
# include<math.h> 
int ifprime(int n);
int main()
{
	int m,i;
	scanf("%d",&m);
	for(i=2;i<=m/2;i++)
	{
		if(ifprime(i)&&ifprime(m-i))
		{
			printf("%d = %d + %d",m,i,m-i);break;
		}
	}
	return 0;
}
int ifprime(int n)        
{
	int i=2,flag=1;
	do
	{
		if(n%i==0&&n!=2)
		{
			flag=0;
			break;
		}
		i++;
	}while(i<=sqrt(n));
	return flag;
}

