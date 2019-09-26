#include <stdio.h>
#include <stdbool.h>

int x, y,z;
void recebe_valores();
void troca_valores();
void soma_valores();
void subtrai_valores();
int multiplica_valores(int x, int y);

void main(){
    printf("Digite a questão que deseja executar: ");
    int questao;
    scanf("%d", &questao);
    switch (questao)
    {
    case 1:
        recebe_valores();
        troca_valores();
        printf("Valor atual do X: %d\n",x);
        printf("Valor atual do Y: %d\n",y);
    break;
    case 2:
        recebe_valores();
        soma_valores();
        printf("Valor da soma e: %d", z);
    break;
    case 3:
        recebe_valores();
        subtrai_valores();
        printf("Valor da subtracao e: %d", z);
    break;
    case 4:
        recebe_valores();
        z = multiplica_valores(x,y);
        printf("Valor da multiplicacao e: %d", z);
    break;
    default:
        printf("Voce nao selecionou porra de questao alguma");
    break;
    }
    
}
void recebe_valores(){
        printf("Digite um valor para x: ");
        scanf("%d", &x);
        printf("Digite um valor para y: ");
        scanf("%d", &y);
}
void troca_valores(){
    int aux = x;
    x = y;
    y = aux;
}
void soma_valores(){
    z = x + y;
}
void subtrai_valores(){
    z = x - y;
}
int multiplica_valores(int x, int y){
    return x * y;
}