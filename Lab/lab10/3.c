#include <stdio.h> //aðaca node ekleyen fonksiyon.
#include <stdlib.h>

struct bin_tree{
	int data;
	struct bin_tree *right, *left;
};


typedef struct bin_tree node;

void insert(node **tree,int val){

	 node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    
     if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

	
}


void print_postorder(node *tree){
	if(tree){
		print_postorder(tree->left);
		print_postorder(tree->right);
		printf("%d\n",tree->data);
	}
}


void main(){
	node *root;
	root = NULL;
	int choice;
	int num;

do{
	printf("Enter your choice:\n1-Insert\n2.Perform Traversal\n3-Exit\nChoice");
	scanf("%d",&choice);

	switch(choice){
	case 1:
		printf("Enter element to insert:");
		scanf("%d",&num);
		insert(&root,num);
		break;
	case 2:
		printf("Display\n");
		print_postorder(root);
		break;
	case 3:
		exit(0);
		
		default:
		printf("Not a valid,try again\n");

	}

}while(choice != 3);


}
