#include <stdio.h>
#include <stdbool.h>
bool isPrimo(int num)
{
    for(int i = 2; i < num-1; i++)
    {
        if((num % i) == 0)
        {
            return false;
        }
    }
    return true;
}
void main()
{
    int vetor[9];
    for(int i = 0; i < 9; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Os valores primos do vetor são: \n");
    for(int i = 0; i < 9; i++)
        if(isPrimo(vetor[i]))
            printf("Posicao %d - %d\n", i, vetor[i]);
}