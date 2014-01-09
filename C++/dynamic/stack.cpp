#include "stack.h"
#include <stdlib.h>

void* stack::pop(){
	if (head == 0)
	{
		return 0;
	}
	void* result = head->data;
	link* oldHead = head;
	head = head->next;
	delete oldHead;
	return result;
}


stack::~stack(){
	link* cursor = head;
	while(head){
		cursor = head->next;
		delete head;
		head = cursor;
	}
}