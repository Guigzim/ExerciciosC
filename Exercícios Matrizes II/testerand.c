#include <stdio.h>
#include <stdlib.h>

void main()
{
    int vetor[100];
    srand(2);
    
    for(int i = 0; i < 100; i++){
        vetor[i] = rand()%100;
        printf("%d\n", vetor[i]);
    }


}