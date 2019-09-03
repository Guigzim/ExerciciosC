#include <stdio.h>
#include <locale.h>

void main()
{
    int X[10], Y[10], uniao[20], UniaoCount=0;
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
        if(UniaoCount != 0)
        {
            int auxX = 0, auxY = 0;
            for(int j = 0; j < UniaoCount; j++)
            {
                if(uniao[j] == X[i])
                {
                    auxX++;
                }
                if(uniao[j] == Y[i])
                {
                    auxY++;
                }
            }
            if(Y[i] != X[i])
            {
                if(auxX == 0)
                {
                    uniao[UniaoCount] = X[i];
                    UniaoCount++;
                }
                if(auxY == 0)
                {
                    uniao[UniaoCount] = Y[i];
                    UniaoCount++;
                }
            }else
            {
                if(auxX == 0)
                {
                    uniao[UniaoCount] = X[i];
                    UniaoCount++;
                }
            }
        }else{
            if(X[i] == Y[i]){
                uniao[UniaoCount] = X[i];
                UniaoCount++;
            }else
            {
                uniao[UniaoCount] = X[i];
                UniaoCount++;
                uniao[UniaoCount] = Y[i];
                UniaoCount++;

            }
        }
    }
    for(int i = 0; i < UniaoCount; i++){
        printf("Pos %d - %d\n", i, uniao[i]);
    }
}