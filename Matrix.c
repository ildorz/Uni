//
//  main.c
//  matrice
//
//  Created by Mattia Dorz on 06/10/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 5
#define M 6
int main()
{
    int matrice[N][M], i, j, somma[N];
    time_t t;
    srand((unsigned) time(&t));
    for (i=0; i<N; i++)
    {
        for(j=0;j<M;j++)
        {
            matrice[i][j]=rand()%5;
        }
    }
    for (i=0; i<N; i++)
    {
        somma[i]=0;
        printf("Riga %d)\t\t",i+1);
        for(j=0;j<M;j++)
        {
            printf("%d \t\t",matrice[i][j]);
            somma[i]=somma[i]+matrice[i][j];
        }
        printf("La somma della riga %d e': %d", i+1, somma[i]);
        printf("\n");
    }
    printf("\n");
    return 0;
}
