//
//  compute.c
//  Es_3
//
//  Created by Mattia Dorz on 15/11/22.
//
#include <stdio.h>
#include <stdbool.h>
#include <ncurses.h>
#define STR_LENGHT 100
#define C 8
#define R 8
#define WHITE 'B'
#define BLACK 'N'
typedef struct player
{
    char nome[STR_LENGHT+1];
    char cognome[STR_LENGHT+1];
    char color;
}player;
typedef struct pedestral
{
    char color;
    bool dame;
}pedestral;
typedef struct casella
{
    int l,c;
    bool presence;
    char color;
    pedestral p;
}casella;
void inizializza_giocatore(player *, char);
void inizializza_scacchiera(casella[][C]);
void stampa(casella[][C]);
void inizializza_giocatore(player *p, char color)
{
    p->color=color;
    printf("Inserire nome del giocatore %c :",color);
    scanf("%s",p->nome);
    getchar();
    printf("Inserire conome del giocatore %c: ",color);
    scanf("%s",p->cognome);
    getchar();
}
void inizializza_scacchiera(casella scacchiera[][C])
{
    int i,j;
    for (i=0;i<R;i++)
        for(j=0;j<C;j++)
        {
            if((i+j)%2==0)
                scacchiera[i][j].color=BLACK;
            else
                scacchiera[i][j].color=WHITE;
                scacchiera[i][j].presence=false;
            if(i<3&&scacchiera[i][j].color==BLACK)
            {
                scacchiera[i][j].presence=true;
                scacchiera[i][j].p.color=BLACK;
                scacchiera[i][j].p.dame=false;
            }
            else if (i>4&&scacchiera[i][j].color==BLACK)
            {
                scacchiera[i][j].presence=true;
                scacchiera[i][j].p.color=WHITE;
                scacchiera[i][j].p.dame=false;
            }
        }
}
void stampa(casella scacchiera[][C])
{
    int i,j;
    char v;
    for (i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            v=' ';
            if(scacchiera[i][j].presence==true)
                v=scacchiera[i][j].p.color;
            else if(scacchiera[i][j].color==BLACK)
                v='O';
            printf("\t%c",v);
        }
        printf("\n");
    }
}
