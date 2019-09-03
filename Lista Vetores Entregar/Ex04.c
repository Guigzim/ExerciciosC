#include <stdio.h>

void main()
{
    int X[10], Y[10], dif[20], difCount=0;
    printf("Questão 03: \n");
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
        int aux = 0;
        for(int j = 0; j < 10; j++)
        {
            if(X[i] == Y[j])
            {
                aux++;
            }
        }
        if(aux == 0)
        {
            int auxDif = 0;
            for(int k = 0; k < difCount; k++)
            {
                if(dif[k] == X[i])
                {
                    auxDif++;
                }
            }
            if(auxDif == 0)
            {
                dif[difCount] = X[i];
                difCount++;
            }
        }
    }
    for(int i = 0; i < difCount; i++)
    {
        printf("Pos %d - %d\n", i, dif[i]);
    }
}