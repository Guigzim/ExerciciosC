#include <stdio.h>

void main(){
    float precos[10], comissao = 0.03, vendatotal = 0, salario = 998;
    int qntds[10], Mvendido = 0, PMVendido;
    
    for(int i = 0; i < 10; i++)
    {
        printf("---------------------------------------------\n");
        
        printf("Digite o valor do item vendido: ");
        scanf("%f", &precos[i]);
        printf("Digite a quantidade do item vendido: ");
        scanf("%d", &qntds[i]);
        if(qntds[i] > Mvendido)
        {
            Mvendido = qntds[i];
            PMVendido = i;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        float valorTotal = qntds[i] * precos[i];
        printf("Produto %d: %d x R$ %.2f = R$ %.2f\n", i, qntds[i], precos[i], valorTotal);
        vendatotal+=valorTotal;
    }
    printf("Valor total vendido é: R$ %.2f\n", vendatotal);
    printf("---------------------------------------\n");
    printf("Salario + comissao: R$ %.2f + R$ %.2f = R$ %.2f\n", salario, (vendatotal*comissao), (salario+(vendatotal*comissao)));
    printf("---------------------------------------\n");
    printf("Produto mais vendido eh: \n");
    printf("Posicao %d - R$ %.2f", PMVendido, precos[PMVendido]);
}