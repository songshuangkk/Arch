#include <stdio.h>

#define MAX 10000

void primes(int start, int end)
{
	int i = start==1?2:start;
	int j;
	int flag = 0;
	int m = 0;
	int hash[MAX] ={};
	
	for(; i <=end; i++)
	{
		for( j = 2; j <= i/2; j++)
		{
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
		{
			flag = 0;
			continue;
		}
		hash[m] = i;
		m++;
	}

	for( i=0; i<m; i++)
	{
		if((hash[i]*hash[i])<=end)
			printf("%d ", hash[i]*hash[i]);
	}
	printf("\n");
}

int
main(int argc, const char *argv[])
{
	int start = 0;
	int end = 0;

	scanf("%d", &start);
	scanf("%d", &end);
	primes(start, end);
	return 0;
}
