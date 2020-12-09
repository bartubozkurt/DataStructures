#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	node *next;
}node;

node *head = NULL;
node *temp = NULL;
node  *new_node = NULL;

void createLinkedList(int  n);
void insertBack(int x);
void display();

int main(){
	int n;
	printf("\nHow many nodes: ");
	scanf("%d",&n);
	
	createLinkedList(n);
	insertBack(6);
	display();
	return 0;
}

void createLinkedList(int  n)
{
	int i;

	for(i=0;i< n;i++){
		
		temp =(node*)malloc(sizeof(node));
		printf("Enter the data for node number: ",i+1);
		scanf("%d",&(temp->data));
		temp->next = NULL;
	
		if(head == NULL)
				head = temp;
		else
		{
			new_node = head;
			while(new_node->next != NULL){
				new_node = new_node->next;
			}
			new_node->next= temp;
		}
	}
	printf("=================\n");
 	printf("LINKED LIST CREATED SUCCESSFULLY\n");
}

void insertBack(int x){
	node *start = (node*)malloc(sizeof(node));
	start->data = x;
	start->next = NULL;
	
	if(head == NULL)
	{
		head = start;
	}
	else
	{
		new_node = head;
		while(new_node->next != NULL)
		{
			new_node = new_node->next;
		}
		new_node->next = start;
	}	
}

void display()
{	
	if(head == NULL){
		printf("List is empty\n");
	}
	else
	{
		new_node = head;
		while(new_node != NULL)
		{
			if(new_node->next == NULL)
			{
				printf("%d -> NULL",new_node->data);
				new_node = new_node->next;
			}
			else
			{
				printf("%d ->",new_node->data);
				new_node = new_node->next;
			}
		}
		
		//printf("%d ",new_node->data);
	}
}
