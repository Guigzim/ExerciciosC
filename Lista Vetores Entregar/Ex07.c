#include <stdio.h>


void main()
{
    int X[10], Y[10], Z[20], count=0;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor X: ", i);
        scanf("%d", &X[i]);
    }
    printf("\n-------------------------------------------------------\n");
    for(int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor X: ", i);
        scanf("%d", &Y[i]);
    }
    for(int i = 0; i < 20; i++)
    {
        Z[i] = X[count];
        i++;
        Z[i] = Y[count];
        count++;
    }
    for(int i = 0; i < 20; i++)
    {
        printf("Pos %d - %d\n", i, Z[i]);
    }


}