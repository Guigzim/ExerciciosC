#include <stdio.h>
#include <string.h>


void main()
{
	float temp[12], min, max;
	int posMax, posMin;
	char mes[12][10] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	
	
	for(int i = 0; i < 12; i++)
	{
		printf("Digite a temperatura referente ao mes de %s: \n", mes[i]);
		scanf("%f", &temp[i]);
		if(i == 0)
		{
			min = temp[i];
			posMin = i;
			max = temp[i];
			posMax = i;
		}
		else
		{
			if(temp[i] < min)
			{
				min = temp[i];
				posMin = i;
			}
			if(temp[i] > max)
			{
				max = temp[i];
				posMax = i;
			}
		}
	}
	printf("Temperatura maxima foi em %s - %.2f\n", mes[posMax], temp[posMax]);
	printf("Temperatura minima foi em %s - %.2f\n", mes[posMin], temp[posMin]);



}