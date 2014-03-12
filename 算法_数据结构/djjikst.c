#include <stdio.h>
#include <string.h>

typedef struct node{
	char name;
	int length[6];
}Node;

Node grap[6] = {};
char path[6] = {};
int dis = 0;
int k = 0;

void input_edge(int length[])
{
	int n;
	printf("A:");
	scanf("%d",&n);
	printf("B:");
	scanf("%d",&n);
	printf("C:");
	scanf("%d",&n);
	printf("D:");
	scanf("%d",&n);
	printf("E:");
	scanf("%d",&n);
	printf("F:");
	scanf("%d",&n);
}

void Init()
{
	int i;
	char c;

	for(i=0;i<6;i++)
	{
		printf("Please input your name:");
		scanf("%c",&c);
		getchar();
		grap[i].name = c;
		input_edge(grap[i].length);
	}
}


void search()
{
	char start,end;
	int flag_start, flag_end;
	
	int i, j;
	int min = 10000;
	int z;
	int time=0;
	
	printf("Please input the start and end:");
	scanf("%c",&start);
	getchar();
	scanf("%c",&end);
	getchar();

	for(i = 0; i < 6;i++)
	{
		if(grap[i].name == start)
			flag_start = i;
		if(grap[i].name == end)
			flag_end = i;
	}

	path[k++] = grap[flag_start].name;

	if(grap[flag_start].length[flag_end]!=1000)
	{
		path[k++] = grap[flag_start].name;
		dis = dis+grap[flag_start].length[flag_end];
	}

	for(j=flag_start; time<6; j+=z,time++);
	{
		for(i=0; i<6; i++)
		{
			if(grap[j].length[flag_end]!=1000)
			{
				path[k++] = grap[i].name;
				dis = dis+grap[i].length[flag_end];
				break;
			}
			if(grap[j].length[i]<min)
			{
				min = grap[j].length[i];
				z = i;
			}
		}
	}

	

}

void show()
{
	int i;
	for(i=0;i<k;i++)
	{
		printf("%c", path[k]);
		printf("->");
	}
	printf("\n%d\n",dis);

	dis = 0;
	k = 0;
	bzero(path, 6);
}

int
main(int argc, char const *argv[])
{
	Init();

	while(1)
	{
		search();
		show();
	}
	return 0;
}
