#include"stdio.h"
#include"stdlib.h"
#define N 50
int filecopy(char[],char[]);
int filecopy(char s1[], char s2[])
{
    FILE *S1,*S2;
    int i, caratteri_copiati, letti;
    char carattere_temporale;
    S1 = fopen(s1,"r");
    S2 = fopen(s2,"w");
    if(S1==NULL||S2==NULL)
    {
         if(S1==NULL)
            printf("Error %s", s1);
        else
            fclose(S1);
        if(S2==NULL)
            printf("Error %s",s2);
        else
            fclose(S2);
    }
    else
    {
        caratteri_copiati=0;
    }
    do
    {
        fscanf(S1,"%c",&carattere_temporale);
        if(!feof(S1))
        {
            fprintf(S2,"%c",carattere_temporale);
            caratteri_copiati++;
        }
    } while (!feof(S1));
    fclose(S1);
    fclose(S2);
    return caratteri_copiati;
}