#include <stdio.h>
#include <locale.h>

void main()
{
    int X[10], Y[10], produto[10];
    printf("Questão 01: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor X: ", i);
        scanf("%d", &X[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor Y: ", i);
        scanf("%d", &Y[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        produto[i] = X[i] * Y[i];
    }
    printf("Posicao 00: VetorX * VetorY = VetorProduto\n");
    for(int i = 0; i < 10; i++)
    {
        printf("Posicao %d: %d * %d = %d\n", i, X[i], Y[i], produto[i]);
    }
}