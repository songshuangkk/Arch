#ifndef STACK_H
#define STACK_H 

class stack
{
	struct link
	{
		void* data;
		link* next;
		link(void* Data, link* Next){
			data = Data;
			next = Next;
		}
	}*head;
public:
	stack(){head = 0;}
	~stack();

	void push(void *Data){
		head = new link(Data, head);
	}

	void* peek()const {return head->data;}

	void* pop();
	
};

#endif
