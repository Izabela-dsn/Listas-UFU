#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int vet[10], M, i, p;
		printf("Digite dez n�meros: ");
		for(i=0; i<10; i++)
			scanf("%d", &vet[i]);
		
		printf("\nO vetor:\n");
		for(i=0; i<10; i++)
			printf("%d\t", vet[i]);
			
		M=vet[0];
		
		for(i=0; i<10; i++)
			if(vet[i]>M){
				M=vet[i];
				p=i;//posi��o do n�mero maior//
			}
		
		printf("\nO maior n�mero �: %d\n", M);
		printf("Localizado em vet[%d]", p);
			
		getch();
		return 0;	
	}
