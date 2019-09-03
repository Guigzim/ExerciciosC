#include <stdio.h>

void main()
{
    float consumo[5];
    char carros[5][10];
    int posEco;

    for(int i = 0; i < 5; i++)
    {
        printf("\nDigite o modelo do veiculo: \n");
        scanf("%s", &carros[i]);
        printf("Digite o consumo do veiculo(Km/L): \n");
        scanf("%f", &consumo[i]);
        if(i == 0)
        {
            posEco = i;
        }else
        {
            if(consumo[i] > consumo[posEco])
            {
                posEco = i;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printf("Veiculo: %s | Consumo: %.2f Km/L | L/1000Km: %.2f\n", carros[i], consumo[i], (1000/consumo[i]));
        
    }
    printf("\n----------------------------------------------------------------------------------\n");
    printf("O mais economico e:\n");
    printf("Veiculo: %s | Consumo: %.2f Km/L", carros[posEco], consumo[posEco]);
}