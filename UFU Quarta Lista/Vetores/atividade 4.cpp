#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int vet[8], X, Y, i;
		printf("Digite oito n�meros para um vetor: ");
		for (i=0; i<8; i++)
			scanf("%d", &vet[i]);
		
		printf("Digite dois n�meros menores que 8 que v�o representar 2 posi��es no vetor: ");
		scanf("%d%d", &X, &Y);
		printf("A soma dos valores encontrados nas posi��es digitadas acima: %d", vet[X]+vet[Y]);
		
		getch();
		return 0;			
	}
