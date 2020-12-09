#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int top = -1;
int stack[MAX];

void push();
void pop();
void peek();
void display();

int main(){
	int choice;
	
	while(1){
		printf("\n//STACK\\");
		printf("\n\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit");
		printf("\n\nEnter your choice(1-5): ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
                peek();
                break;
			case 4:
				display();
				break;
		    case 5:
		    	exit(0);
	    	default:
	    		printf("\nWrong choice!!");
		}
	}
	
	return 0;
}

void push(){
	int value;
	if(top == MAX-1) 
		   printf("\nStack is full!!");
	
	else{
		printf("Enter element to push: ");
		scanf("%d",&value);
		top += 1;
		stack[top] = value;
	}
}

void pop(){
	if(top == -1) 
		   printf("\nStack is empty");
	
	else{
		printf("\nDeleted element is: %d",stack[top]);
		top -=1;
	}
}

void peek(){
	printf("\n Current  top: %d",stack[top]);
}

void display(){
	if(top == -1) 
       printf("\nStack is empty");
	
	else{
		printf("\nStack  is  ...\n");
		for(int i=top; i >= 0;--i){
			printf("%d\n",stack[i]);
		}
	}
}


