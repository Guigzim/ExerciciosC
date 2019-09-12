#include <stdio.h>


void main(){

    int altura = 0;
    int largura = 0;

    printf("Digite a altura: ");
    scanf("%d", &altura);

    printf("Digite a largura: ");
    scanf("%d", &largura);

    printf("\n");

    int area = largura * altura;
    int countN = 1;
	int i;
    for(i = 1; i <= area; i++){

        if(countN == 1 || countN == altura)
		{
        	printf("#");	
		}else
		{
			if( ((countN-1)*largura + 1) == i || (countN * largura) == i)
			{
				printf("#");
			}else{
				printf(" ");
			}
		}
		if(i%largura == 0)
        {
            printf("\n");
            countN++;
        }
    }
}


