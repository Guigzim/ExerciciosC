#include <stdio.h>

void procedimentoRecursivo(valor);
void main(){
    printf("Digite o valor: ");
    int valor;
    scanf("%d", &valor);
    printf("%d", valor);


    procedimentoRecursivo(valor);


}
void procedimentoRecursivo(valor){
    if( valor > 1){
        procedimentoRecursivo(valor-1);
    }
    printf("%d\n", valor);
}