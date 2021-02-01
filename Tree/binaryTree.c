#include <stdio.h> 
#include <stdlib.h> 

struct node { 
	int data; 
	struct node *left, *right; 
}; 


struct node* createNode(int value) 
{ 
	struct node* temp 
		= (struct node*)malloc(sizeof(struct node)); 
	temp->data = value; 
	temp->left = temp->right = NULL; 
	return temp; 
} 
// IN ORDER                                                 left  data right
void inOrder(struct node* root) 
{ 
	if (root != NULL) 
	{ 
		inOrder(root->left); 
		printf("%d ->", root->data); 
		inOrder  (root->right); 
	} 
}
// PRE ORDER                                                data left right
void preOrder(struct node* root) 
{ 
	if (root != NULL) 
	{ 
        printf("%d ->", root->data);
		inOrder(root->left);		 
		inOrder  (root->right); 
	} 
}
// POST ORDER                                               left right data
void postOrder(struct node *root)
{
    if (root != NULL)
    {
       postOrder(root->left);
       postOrder(root->right);
  	   printf("%d ->", root->data);
    }    
}
struct node* insert(struct node* root, int value) 
{ 	
	if (root == NULL) 
		return createNode(value); 

	if (value < root->data) 
		root->left = insert(root->left, value); 
	else if (value > root->data) 
		root->right = insert(root->right, value); 

	return root; 
} 


int main() 
{ 
	/*	
	       50 
	      /	 \ 
	    30	 70 
   	   / \   / \ 
	 20 40   60 80 */
	 
	struct node* root = NULL; 
	root = insert(root, 50); 
	insert(root, 30); 
	insert(root, 20); 
	insert(root, 40); 
	insert(root, 70); 
	insert(root, 60); 
	insert(root, 80); 
	
	inOrder(root); 
	printf("\n");
	preOrder(root);
	printf("\n");
	postOrder(root);
	
	return 0; 
}

