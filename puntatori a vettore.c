//stampa e riempi vettore con puntatore
//i è dimensione vettore
for(j=0;j<i;j++)
        {
            printf("Inserci valore:");
            scanf("%f",(v+j));
        }
for(int j=0; j<i;j++)
            printf("\n%f",*(v+j));
//stampa e riempi vettore a matrice
int *creaMatrice(int dim1, int dim)
{
    int *nuovo;
    int val;
    int i,j;
    nuovo=(int*)malloc(sizeof(int)*(i*j));
    for(i=0;i<dim1;i++)
        for(j=0;j<dim;j++)
        {
            printf("Inserisici valore matrix %d %d", i+1, j+1);
            scanf("%d",(dim*i+j+nuovo));
    
        }
    return nuovo;
}
int row, cols; int i,j; int *v;
for(int i=0;i<row;i++)
        for(int j=0;j<cols;j++)
        {
            printf("%d",*(cols*i+j+v)); //20*riga+colonna+indirizzo_base; per acesso con matici
        }