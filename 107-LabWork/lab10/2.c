#include <stdio.h>
#include <stdlib.h>

struct node {
	int num;
	struct node *nextptr;
}*strnode;  // *strnode sadece struct'�m�z�n tipinde bir de�i�ken.

//�u �ekilde de olurdu.
/*
	struct node {
	int num;
	struct node *nextptr; 
	};
	struct node *strnode;

*/


void createNodeList(int n);
void displayList();

typedef struct node node;

int main(){

	strnode=NULL;


	int n;
		printf("\n\n Linked List: To create and display Singly Linked List: \n");
		printf("--------------------------------\n");



	printf("Input the number of nodes:");
	scanf("%d",&n);
	createNodeList(n);
	printf("Data entered in the list: \n");
	displayList();
	return 0;
}

void createNodeList(int n){	

	strnode=(node*)malloc(sizeof(node));
	strnode->num=0;
	strnode->nextptr=NULL;
	node *tmp=strnode;
	int i;
	for( i=1;i<n;++i){
		strnode->nextptr=(node*)malloc(sizeof(node));
		strnode->nextptr->num=i;
		strnode->nextptr->nextptr=NULL;
		strnode=strnode -> nextptr;

	}
	strnode=tmp;


}

void displayList(){
	struct node *tmp;
	if(strnode==NULL){                //memoryde bo�a gitmesin diye(tekrar incelenecek.)
		printf("List is empty.");
	}

	else{

		tmp=strnode;
		while (tmp != NULL){
			printf("Data = %d\n",tmp->num);
			tmp = tmp->nextptr;
		}
	}
}











