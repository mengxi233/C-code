#include <stdio.h>
int main (void) {
	int n, m ;
	int count=0, sum=0, i, num ; 
	
	scanf ("%d %d", &m,&n) ;
	for (num=m; num<=n; num++) 
	{ 
		for ( i=2; i<=num/2; i++) 

			if (num % i == 0)
				break ;
		if (i > num/2 && num != 1) 
		{ 
			sum = sum + num ; 
			count ++ ; 

		}

	}
	printf ("%d %d", count, sum) ; 
	return 0 ;
}

