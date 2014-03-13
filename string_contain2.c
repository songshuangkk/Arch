/*****位?算*****
?字符串A,用位?算（26bit整数表示)?算出一个“?名”，
再用B中的字符到A里面?行?找。
?个方法的??是用一个整数代替了hashtable，
空???度可以降低?O(1)。????度?是O(n + m)。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

int bool_string(char *str1, char *str2)
{
	int hash = 0;
	int i = 0;

	for(i=0; i<strlen(str1); i++)
	{
		printf("str1[i]-'A' = %d\n", str1[i]-'A');
		printf("1<<(str1[i]-'A') = %d\n", 1<<(str1[i]-'A'));
		hash |= (1<<(str1[i]-'A'));
	}

	for(i=0; i<strlen(str2); i++)
	{
		if((hash &(1<<(str2[i]-'A'))) == 0)
			return 0;
	}
	return 1;
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

	printf("%s\n", bool_string(str1, str2)?"True":"False");
	
	free(str1);
	free(str2);

	str1 = NULL;
	str2 = NULL;

	return 0;
}
