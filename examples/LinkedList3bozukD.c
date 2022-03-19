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
}
void ekle(node *r,int x){
	while(r->next != NULL){
		r= r->next;	
	}
	r->next=(node*)malloc(sizeof(node));
	r->next->x = x;
	r->next->next = NULL;
}

node * ekleSirali(node * r,int x){
	if(r==NULL){        //Henuz linkedlistte eleman yok demektir.
		r=(node*)malloc(sizeof(node));
		r->next==NULL;
		r->x = x;
		return r;       //r degeri artik degisti.
	}
	
	if(r->x > x){  // x i baþa eklemem lazým demektir. (ilk elemandan kucuk bir elemansa)
			//root degisiyor.
			node * temp=(node*)malloc(sizeof(node));  //bu kutu rootumuz oluyo.
			temp->x=x;  //artik bu kutunun roottan onceye gelmesi lazim.
			temp->next=r;  
			return temp;  
		}
		
	node * iter=r; //r bana returnde lazim bu yuzden iterle dolasalim.
	
	while(iter->next!=NULL && iter->next->x < x){ //daha sona gelmemisken ve deger arada bi yerdeyse
		iter= iter->next;
	}
	
 	node * temp = (node*)malloc(sizeof(node));
	temp ->next = iter->next;
	iter->next=temp;
	temp->x=x;
	return r;
}
	
	
	/*  //tek kutuyu ozel olarak ekleme durumu.
	else if(r->next==NULL){  //sadece bir kutu var demektir.
		
	}
	else{
		node *temp=(node*)malloc(sizeof(node));
		temp->x=x;  
		temp->next=NULL; //cunku sondaki eleman olacak artik.
		r->next=temp; 
		return r;
	}
	*/

int main(){
	node * root;
	root =NULL;
	root = ekleSirali(root,400);
	root = ekleSirali(root,40);
	root = ekleSirali(root,4);
	root = ekleSirali(root,450);
	root = ekleSirali(root,50);
	bastir(root);
		
}
