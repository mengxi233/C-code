#include <stdio.h>
#include <string.h>
int main()
{

	char str[80], Maxstr[80];
	int n,len = 0, max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		gets(str);
		len = strlen(str);
		if (len > max)
		{
			max = len;
			strcpy(Maxstr, str);
		}
	}
	printf("The longest is: %s", Maxstr);
	return 0;
}

