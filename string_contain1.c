/****暴力??****
使用????方式?行???个字符串是否包含
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

int bool_string(char *str1, char *str2)
{
	char *ch = str1;
	char *s = str2;
	int flag = 0;
	while(*s)
	{
		while(*ch)
		{
			if(*ch==*s)
			{
				flag++;
				break;
			}
			ch++;
		}
		s++;
		ch = str1;
	}

	s = NULL;
	ch = NULL;

	return flag;
}

int
main(int argc, const char *argv[])
{
	char *str1 = NULL;
	char *str2 = NULL;

	str1 = (char *)malloc(MAX);
	str2 = (char *)malloc(MAX);

	fgets(str1, MAX, stdin);
	fgets(str2, MAX, stdin);

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	printf("%s\n", bool_string(strlen(str1)>strlen(str2)?str1:str2, 
		strlen(str1)<strlen(str2)?str1:str2)==strlen(strlen(str1)<strlen(str2)?str1:str2)?"True":"False");

	free(str1);
	free(str2);

	str1 = NULL;
	str2 = NULL;

	return 0;
}
