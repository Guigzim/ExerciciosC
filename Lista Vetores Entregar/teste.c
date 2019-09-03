#include <stdio.h>


void main()
{
    int vetor[9],count=0;
    for(int i=0;i<9;i++)
    {
        printf("Digite um numero para o vetor: \n");
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<9;i++)
    {
        for(int j = 1; j <= vetor[i]; j++)
        {
                count=0;
                if((vetor[i]%j)==0)
                {
                    count++;
                }

        }
        if(count==2)
        {
            printf("Posicao %d Valor primo %d\n",i,vetor[i]);
        }
    }
}