#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    int la, ca, lb, cb;
    bool canMult = false;
    while(!canMult){
        printf("Digite a quantidade de linhas da matriz A: ");
        scanf("%d", &la);
        printf("Digite a quantidade de colunas da matriz A: ");
        scanf("%d", &ca);
        printf("Digite a quantidade de linhas da matriz B: ");
        scanf("%d", &lb);
        printf("Digite a quantidade de colunas da matriz A: ");
        scanf("%d", &cb);
        if(ca == lb && la == cb){
            canMult = true;
        }else{
            printf("\nPara a multiplicacao de matrizes, a quantidade de colunas da matriz A deve ser igual a quantidade de linhas da matriz B e a quantidade de linhas da matriz A deve ser igual a quantidade de colunas da matriz B\n");
            printf("\n---------------------------------------------------------------------------\n");
        }
    }
    int A[la][ca], B[lb][cb], R[la][cb];
    printf("\n##### PREENCHE E IMPRIME MATRIZ A #####\n");
    preencheMatriz(A,la,ca);
    imprimeMatriz(A,la,ca);
    printf("\n##### PREENCHE E IMPRIME MATRIZ B #####\n");
    preencheMatriz(B,lb,cb);
    imprimeMatriz(B,lb,cb);
    int aux=0;
    for(int l = 0;l < la; l++){
        for(int c = 0; c < cb; c++){
            
            for(int x = 0; x < ca; x++){
                aux += A[l][x] * B[x][c];
            }
            R[l][c] = aux;
            aux=0;
        }
    }
    printf("\n##### IMPRIME MATRIZ RESULTADO #####\n");

    imprimeMatriz(R,la,cb);
}

/*Imprime uma matriz.
Parâmetros: 
M - Matriz a ser impressa
numLc - Numero de linhas da matriz
numCl - Numero de colunas da matriz*/
void imprimeMatriz(int *M, int numLn, int numCl){
    int i=0;
    for(int l = 0; l < numLn; l++){
        for(int c = 0; c < numCl; c++){
            printf("%5d", M[i]);
            i++;
        }
        printf("\n");

    }
}
/*Preenche uma matriz a partir de valores digitados pelo usuario.
Parâmetros: 
M - Matriz a ser preenchida
numLc - Numero de linhas da matriz
numCl - Numero de colunas da matriz*/
void preencheMatriz(int *M, int numLn, int numCl){
    int i=0;
    for(int l = 0; l < numLn; l++){
        for(int c = 0; c < numCl; c++){
            scanf("%d", &M[i]);
            i++;
        }
    }
}
/*Preenche uma matriz com numeros gerados randomicamente.
Parâmetros: 
M - Matriz a ser preenchida
numLc - Numero de linhas da matriz
numCl - Numero de colunas da matriz*/
void RDMpreencheMatriz(int *M, int numLn, int numCl, int faixa){
    int i=0;
    for(int l = 0; l < numLn; l++){
        for(int c = 0; c < numCl; c++){
            M[i] = (rand()%faixa);
            i++;
        }
    }
}