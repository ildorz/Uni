#include<stdlib.h>
#include<stdio.h>
#define MAX_LENGHT 20
typedef struct nodo
{
	int valore;
	nodo *prossimo;
}nodo;
nodo *inserisci_coda(nodo *);
nodo *inserisci_testa(nodo *);
nodo *inserisci_coda(nodo *q)
{
	nodo *nuovo;
    nuovo = (nodo *)malloc(sizeof(nodo));
    printf("Inserisci valore:");
    scanf("%d",nuovo->valore);
	q->prossimo=nuovo;
	nuovo->prossimo=NULL;
     //in main aggiungere q=nuovo
	return nuovo;
}
nodo *inserisci_testa(nodo *q)
{nodo *nuovo;
    nuovo = (nodo *)malloc(sizeof(nodo));
    printf("Inserisci valore:");
    scanf("%d",nuovo->valore);
    nuovo->prossimo=q;
    //in main aggiungere q=nuovo
     return nuovo;
}
int main()
{