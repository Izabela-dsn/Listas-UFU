#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int vet[8], X, Y, i;
		printf("Digite oito números para um vetor: ");
		for (i=0; i<8; i++)
			scanf("%d", &vet[i]);
		
		printf("Digite dois números menores que 8 que vão representar 2 posições no vetor: ");
		scanf("%d%d", &X, &Y);
		printf("A soma dos valores encontrados nas posições digitadas acima: %d", vet[X]+vet[Y]);
		
		getch();
		return 0;			
	}
