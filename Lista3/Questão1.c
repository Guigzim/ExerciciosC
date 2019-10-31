#include <stdio.h>
/*Escreva um algoritmo que imprima todos os n�meros inteiros de 10 a 1 (em ordem
decrescente), utilizando recursividade.*/


void imprime(int num);

void main(){

    imprime(10);

}

void imprime(int num){
    if(num>=1){
        printf("%d\n", num);
        imprime(num-1);
    }
}