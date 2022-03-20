#include<stdio.h>      //bagli listenin sonuna eleman ekleme
#include<stdlib.h>

struct Node{
	int x;
	struct Node *next;
};

typedef struct Node node;

void bastir(node *r){      //r(oot), head gibi biþey
	while(r!=NULL){
		printf("%d ",r->x);
		r = r->next;
	}
	printf("\n");
}

void ekle(node *r,int x){
	while(r->next != NULL){
		r= r->next;	
	}
	r->next=(node*)malloc(sizeof(node));
	r->next->x=x;
	r->next->next=NULL;
}
//Benim silme fonksiyonum.
node* delete(node *r, int x){
	node *temp=r;
	
	if(temp->x == x){	//If the first element.
		r = r->next;
		free(temp);
		temp = r;
		return r;
	}
	while(temp->next != NULL && temp->next->x != x){
		temp = temp->next;
	}
	if(temp->next == NULL){
		printf("Couldn't find number\n");
		return temp;
	}	
	temp->next = temp->next->next;
	//Burda free yapman lazım!!
	return r;
}
//Benim ekleme fonk.
node* siraliekle(node *r, int x){
	node *temp = r;
	node *temp2 = NULL;

	if(r==NULL){
		r = (node*)malloc(sizeof(node));
		r->next=NULL;
		r->x = x;
		return r;
	}
	if(x < r->x){  //İlk elemandan kucukse
		temp = (node*)malloc(sizeof(node));
		temp->x = x;
		temp->next = r;
		return temp;
	}

	while( temp->next != NULL && temp->next->x < x ){
		temp = temp->next;
	}

	temp2 = (node*)malloc(sizeof(node));
	temp2->x = x;
	temp2->next= temp->next;
	temp->next = temp2;
	return r;
}

int main(){
	node *root;
	/*
		root=(node*)malloc(sizeof(node));
		root->next=NULL;
		root->x = 500;
		int i=0;
		for(i=0;i<5;i++){
			ekle(root,i*10);
		}
		root = delete(root,40);
	*/

	root = siraliekle(root,40);
	root = siraliekle(root,39);
	root = siraliekle(root,700);
	root = siraliekle(root,432);

	bastir(root);
}
