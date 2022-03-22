#include<stdio.h>
int main()
{
	double w;
	scanf("%lf",&w);
	
	if(w<1000)
	printf("%.2lf",w);
	if(w>=1000&&w<2000)
	printf("%.2lf",w*0.9);
	if(w>=2000&&w<3000) 
	printf("%.2lf",w*0.85);
	if(w>=3000&&w<4000)
	printf("%.2lf",w*0.8);
	if(w>=4000)
	printf("%.2lf",w*0.75);

	return 0;
}
