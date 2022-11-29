#include"compute.c"
int main()
{
    char s1[N],s2[N];
    int caratteri_copiati;
    printf("Inserire nome file imput");
    scanf("%s",s1);
    printf("Inserire nome file output");
    scanf("%s",s2);
    filecopy(s1,s1);
    printf("Il numero di caratteri copiati e' :%d",caratteri_copiati);
    return 0;
}