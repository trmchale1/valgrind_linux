#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef enum {TRUE=1,FALSE=0} BOOL;

struct node 
	{
		int data;
		struct node *next;
	};

struct node *stackTop = 0;

// ********************* Function Declarations **********************

void stackClear(void); // Empty the stack
void stackPush(int item); // Push
int stackPop(void); // Pop
BOOL stackEmpty(void); // TRUE if stack empty
BOOL stackFull(void); // TRUE if stack full

int main(void)
	{
		struct node *first, *second;
		first->data = 1;
//		printf("first->data =%d",first->data);
//		first->next = second;
//		printf("first->next = %p",first->next);
	}
