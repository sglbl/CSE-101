#include <stdio.h>
#include <stdlib.h>

struct n{
int data;
struct n *sol;
struct n *sag;
};
typedef struct n node;

node * ekle (node *agac , int x)
{
		if (agac == NULL)
		{
			node *root = (node*)malloc(sizeof(node));
			root -> sol = NULL;
			root -> sag = NULL;
			root -> data =x;
			return root;
		}

		if(agac->data < x)
		{
			agac->sag = ekle(agac->sag,x);
			return agac;
		}
			agac->sol = ekle (agac->sol,x);
			return agac;
		}

int max(node *agac)
{
	while(agac->sag != NULL)
	agac=agac->sag;
	return agac ->data;
}

int min(node *agac)
{
	while(agac->sol != NULL)
	agac=agac->sol;
	return agac ->data;
}

void dolas (node *agac)
{
	if (agac == NULL)
	return;
	dolas(agac->sol);
	printf("%d ",agac->data);
	dolas(agac->sag);
}

int main()
{
	node *agac = NULL;
	agac=ekle(agac,12);
	agac=ekle(agac,200);
	agac=ekle(agac,190);
	agac=ekle(agac,213);
	agac=ekle(agac,56);
	agac=ekle(agac,24);
	agac=ekle(agac,18);
	agac=ekle(agac,27);
	agac=ekle(agac,28);
	printf("agacin elemanlari (LNR) = ");
	dolas(agac);
	printf("\n");
	printf("agactaki en buyuk deger = %d \nagactaki en kucuk deger = %d",max(agac),min(agac));
}
