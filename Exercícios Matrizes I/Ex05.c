#include <stdio.h>
#include <locale.h>


void main()
{
    setlocale(LC_ALL, "Portuguese");
    int lxc;
    printf("Digite q quantidade de linhas e colunas das matrizes quadradas e serem calculadas: ");
    scanf("%d", &lxc);
    int A[lxc][lxc], B[lxc][lxc], C[lxc][lxc];
    
    printf("\nx-x-x-x-x Preenchimento do vetor A x-x-x-x-x\n");
    for(int l = 0; l < lxc; l++)
    {
        for(int c = 0; c < lxc; c++)
        {
            printf("Digite um valor para a posicao %dx%d do vetor A: \n", l,c);
            scanf("%d", &A[l][c]);
        }
    }
    printf("\nx-x-x-x-x Preenchimento do vetor B x-x-x-x-x\n");
    for(int l = 0; l < lxc; l++)
    {
        for(int c = 0; c < lxc; c++)
        {
            printf("Digite um valor para a posicao %dx%d do vetor B: \n", l,c);
            scanf("%d", &B[l][c]);
        }
    }
        int aux = 0;
        for(int l = 0; l < lxc; l++){
            for(int c = 0; c < lxc; c++){
                for(int x = 0; x < lxc; x++){
                    aux += A[l][x] * B[x][c];
                }
                C[l][c] = aux;
                aux=0;
            }
        }
    for(int l = 0; l < lxc; l++)
    {
        for(int c = 0; c < lxc; c++)
        {
            printf("%d", C[l][c]);
            printf(" | ");
        }
        printf("\n");
    }
}







