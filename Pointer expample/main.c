//
//  main.c
//  Es_3
//
//  Created by Mattia Dorz on 15/11/22.
//
#include <stdio.h>
#include "compute.c"
#define C 8
#define R 8
#define WHITE 'B'
#define BLACK 'N'
int main()
{
    casella scacchiera[R][C];
    player a,b;
    inizializza_giocatore(&a, WHITE);
    inizializza_giocatore(&b, BLACK);
    printf("\n");
    inizializza_scacchiera(scacchiera);
    stampa(scacchiera);
    printf("\n");
    return 0;
}
