//
//  main.c
//  Es_1
//
//  Created by Mattia Dorz on 17/10/22.
//

#include <stdio.h>
#define N 5
int main()
{
    int array[N],i,temp;
    for (i=0; i<N; i++)
    {
        printf("Insert number %d:",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            temp=array[j];
            if(array[j]>array[j+1])
                array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
    for(int j=0;j<N;j++)
    {
        printf("%d\t",array[j]);
    }
    printf("\n");
    return 0;
}
