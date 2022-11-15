//
//  main.c
//  Array
//
//  Created by Mattia Dorz on 03/10/22.
//
#define N 200
#include <stdio.h>
int main()
{
    int classe[N], i;
    i=0;
    /*
    while (i<N)
    {
        printf("Inserisci voto dello studente n%d: ",(i+1)); //posso farlo perchè è comunque un espressione
        scanf("%d",&classe[i]);
        i++;
    }
    */
    for (i=0; i<N; i++)
    {
        printf("Inserisci voto dello studente n%d: ",(i+1)); //posso farlo perchè è comunque un espressione
        scanf("%d",&classe[i]);
    }
}
