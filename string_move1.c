#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_move(char *str, int n)
{
	int i;
	int len = strlen(str);
	char c;

	while(n--)
	{
		c = str[0];

		for(i=1; i<len; i++)
		{
			str[i-1] = str[i];
		}

		str[len-1] = c;
	}
}

int
main(int argc, const char *argv[])
{
	char str[] = "abcdefg";
	int n;

	while(1)
	{
		scanf("%d", &n);
		string_move(str, n);
		printf("%s\n",str);
	}
	return 0;
}
