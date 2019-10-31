#include <stdio.h>

/*Escreva um algoritmo que leia um valor para X e uma sub-rotina que imprima todos os
n�meros �mpares do intervalo fechado de 1 a X.*/



void imprimeImpares(int numero);

void main(){

    int valor;
    printf("Digite a quantidade de valores para rodar: ");
    scanf("%d",&valor);
    imprimeImpares(valor);

}
void imprimeImpares(int numero){
    
    for (int i = 1; i <= numero; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    

    
}