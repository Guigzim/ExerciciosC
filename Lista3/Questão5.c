#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Escreva um programa contendo fun��es ou procedimentos para realizar as seguintes tarefas:
a. Calcular o resto da divis�o inteira de a por b
b. Exibir um inteiro entre 1 e 999 como uma sequ�ncia de d�gitos, separando cada par de
d�gitos por dois espa�os. Por exemplo, o inteiro 456 deve ser apresentado como 4 5 6.
c. Imprimir os m�ltiplos de 7 menores que 200.
*/



int calculaInteiro(int divisor, int valor){

    int result = valor / divisor;

    return result;
}

void numeroSeparado(int num, int *vetor){

    int numero = num;
    if (numero > 100 && numero < 999)
    {
        vetor[0] = calculaInteiro(100, numero);
        numero -= vetor[0] * 100;

        vetor[1] = calculaInteiro(10, numero);

        numero -= vetor[1] * 10;

        vetor[2] = calculaInteiro(1, numero);

    }
    if (numero > 9 && numero < 100)
    {
        vetor[0] = 0;
        vetor[1] = calculaInteiro(10, numero);
        numero -= vetor[1] * 10;
        vetor[2] = calculaInteiro(1, numero);
    }
    if (numero > 1 && numero < 10)
    {
        vetor[0] = 0;
        vetor[1] = 0;
        vetor[2] = calculaInteiro(10, numero);
        
    }
    else{
        printf("Digite um numero valido!");
    }
    
    
    

}


void Divisiveis7ate200(){

    for (int i = 0; i < 200; i++)
    {
        if(i % 7 == 0)
        {
            printf("\n%d", i);
        }
    }
    

}





void main(){

    int vetor[3];
    numeroSeparado(79, vetor);
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d\n", vetor[i]);
    }
    printf("\n\n");
    Divisiveis7ate200();
}

