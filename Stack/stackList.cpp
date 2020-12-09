#include<stdio.h>
#include<stdlib.h>
#define  MAX 5

int count=0;

typedef  struct stack{
	int data[MAX];
	int top;
}stack;

void createEmptyStack(stack *st);
void push(stack *st,int new_);
void display(stack *st);
void pop(stack *st);
void peek(stack *st);

int main(){
	
	int  ch;
	
	stack *st=(stack*)malloc(sizeof(stack));
	
	createEmptyStack(st);
	
	push(st,1);
	push(st,2);
	push(st,3);
	push(st,4);
	push(st,5);
	
	
	display(st);
	
	pop(st);
	
	peek(st);
	
	printf("\nAfter popping out\n");
	display(st);
	
	return 0;
}

void createEmptyStack(stack *st){
	st->top = -1;	
}

void push(stack *st,int new_){
	if(st->top == MAX-1)
 		   printf("Stack is full!!");
    else{    	
    	st->top = st->top +1;
    	st->data[st->top] = new_;
	}
	count++;
}

void display(stack *st){
	printf("==Stack==\n");
	
	for(int i=0; i < count; i++)
			printf("%d ",st->data[i]);
	printf("\n");
}

void pop(stack *st){
	if(st->top == -1)
       printf("Stack is Empty!");
    else{
    	printf("\nItem popped : %d\n",st->data[st->top]);
    	st->top = st->top  - 1;
	}
	count--;
	printf("\n");
}
void peek(stack *st){
	printf("Current top now(PEEK): %d\n",st->data[st->top]);
	//return st->data[st->top];
}


