#include <stdio.h>

/*Escreva um algoritmo que leia um valor para X e uma sub-rotina que imprima todos os
n�meros �mpares do intervalo fechado de 1 a X.*/



void imprimeImpares(int numero);
void isImpar(int num);

void main(){

    int valor;
    printf("Digite a quantidade de valores para rodar: ");
    scanf("%d",&valor);
    imprimeImpar(valor);

}
void imprimeImpar(int num)
{
    if(num == 1){
    isImpar(num);
        
    }else{
        
        imprimeImpar(num - 1);
        isImpar(num);

    }

    
}
void isImpar(int num){
    if (num % 2 != 0)
    {
        printf("%d\n", num);
    }
}