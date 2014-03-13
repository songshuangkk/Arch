
/******************************************
*将一个字符串分成X和Y?个部分，在?部分字符串上定?反?操作，
如X^T，即把X的所有字符反?（如，X="abc"，那?X^T="cba"），
那?就得到下面的??：(X^TY^T)^T=YX。?然?解决了字符串的反???。

例如字符串 abcdef ，若要?def翻?到abc的前?，只要按下述3个??操作即可：

首先分??部分，X:abc，Y:def；
将X反?，X->X^T，即得：abc->cba；将Y反?，Y->Y^T，即得：def->fed。
反?上述得到的?果字符串X^TY^T，即字符串cbafed的?部分（cba和fed）?予反?，
得到：cbafed->defabc，形式化表示?(X^TY^T)^T=YX，?就??了整个反?。
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void reverse(char *s, int from, int to)
{
	char c;

	while(from<to)
	{
		c = s[from];
		s[from++] = s[to];
		s[to--] = c;
	}
}

int
main(int argc, const char *argv[])
{
	char *str = "abcdefg";
	int n;

	scanf("%d", &n);
	
	reverse(str, 0, n-1);
	reverse(str, n, strlen(str)-1);
	reverse(str, 0, strlen(str)-1);

	printf("%s\n", str);
	return 0;
}
