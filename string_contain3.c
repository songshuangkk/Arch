/*****哈希表的使用*****
 使用哈希表?行??个字符串?行映射
 ?系?理.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

int hash_string(char *str1, char *str2)
{
	int size = strlen(str2);
	int i = 0;
	int x;
	int hash[40] = {};

	for(; i<size; i++)
	{
		x = str2[i] - 'a';
		if(hash[x] == 0)
			hash[x] = 1;
	}

	for(i=0; i<strlen(str1); i++)
	{
		x = str1[i] - 'a';
		if(hash[x] == 1)
		{
			size--;
			hash[x] = 0;
		}
	}

	return size == 0;
}

int
main(int argc, const char *argv[])
{
	char *str1 = NULL;
	char *str2 = NULL;

	str1 = (char*)malloc(MAX);
	str2 = (char*)malloc(MAX);

	fgets(str1, MAX, stdin);
	fgets(str2, MAX, stdin);

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	printf("%s\n", hash_string(strlen(str1)>strlen(str2)?str1:str2, 
		strlen(str1)<strlen(str2)?str1:str2)?"True":"False");
	
	free(str1);
	free(str2);

	str1 = NULL;
	str2 = NULL;

	return 0;
}
