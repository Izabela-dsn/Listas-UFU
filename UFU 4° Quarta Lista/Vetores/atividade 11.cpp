#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL, "portuguese");
		int cont, i;
		float vet[10], soma;
		printf("Adicione dez n�meros: ");
		
		for (i=0; i<10; i++)
			scanf("%f", &vet[i]);
		
		for(i=0; i<10; i++){
			if(vet[i]<0)
			cont++;
		}
		printf("A quantidade de n�meros negativos �: %d", cont);

		for(i=0; i<10; i++){
			if(vet[i]>0)
		 	soma += vet[i];
		}
		printf("\nA soma dos positivos �: %.1f", soma);
			
		
		getch();
		return 0;
	}
