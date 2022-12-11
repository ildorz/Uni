#include<stdlib.h>
#include <stdio.h> 
#define MAX_LENGHT 255
int main () 
{
    FILE *fp; 
    int conta_righe=0;
    char str[255];
    if ((fp = fopen("conta_righe.txt","r"))==NULL) // Controllo se il file esiste 
    {
        printf("ERRORE");
    }
    else
    {
        while((fgets(str,255,fp))!=NULL) // fgets usa NULL per vedere se la lettura e' andata a buon fine, quindi a fine di ogni riga
            conta_righe++;
    }
        fclose(fp); // chiude il file
        printf("Nel file sono presenti %i righe ",conta_righe);
        getchar();
        return 0; // 0 = tutto ok
}