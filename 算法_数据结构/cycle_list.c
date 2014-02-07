/*---Cycle_List.c-----------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define OK 1
#define ERROR 0

struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node Node;


int Cycle_List_Init(Node *Head)
{
	Head = (Node*)malloc(sizeof(struct Node));
	if (Head == NULL)
	{
		return ERROR;
	}
	return OK;
}

int Cycle_List_Free(Node *Head)
{
	Node *p = Head->next;
	while(p != Head )
	{
		Node *q = p->next;
		free(p);
		p = q;
	}
}

int main(int argc, char const *argv[])
{
	Node *Head = NULL;

	Cycle_List_Init(Head);

	Cycle_List_Free(Head);
	return 0;
}
