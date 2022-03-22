#include<stdio.h>
#include<string.h>
struct book{
	char name[50];
	double price;
};


int main()
{
	int n,i;
	scanf("%d\n",&n);
	struct book a[n];

	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
			gets(a[i].name);
			scanf("%lf\n",&a[i].price);
		}
		else 
		{
			gets(a[i].name);
			scanf("%lf",&a[i].price);
		}
	}
	
	int m=0;
	for(i=0;i<n;i++)
	{
		if(a[i].price>a[m].price)
		m=i;
	}
	
	printf("%s\n",a[m].name);

	
	
}

