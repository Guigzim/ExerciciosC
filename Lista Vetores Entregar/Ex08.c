#include <stdio.h>


void main()
{
    int X[8], Y[8], Z[8], y=0, z=0;
    for(int i = 0; i < 8; i++)
    {
        printf("Digite um valor para a posicao %d do vetor X: ", i);
        scanf("%d", &X[i]);
        if(X[i] == 0)
        {
            printf("0 eh um numero invalido pois ele nao eh positivo e nem negativo!\n");
            i--;
        }
    }
    for(int i = 0; i < 8; i++)
    {
        if(X[i] > 0)
        {
            Y[y] = X[i];
            y++;
        }
        else
        {
            Z[z] = X[i];
            z++;
        }
    }
    printf("\n----------------------------------------------\n");
    printf("Soh positivos: \n");
    
    for(int i = 0; i < y; i++)
    {
        printf("Pos %d - %d\n", i, Y[i]);
    }
    printf("\n----------------------------------------------\n");
    printf("Soh negativos: \n");
    for(int i = 0; i < z; i++)
    {
        printf("Pos %d - %d\n", i, Z[i]);
    }


}