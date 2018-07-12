#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int A[6] = {1,0,5,-2,-5,7}, i;
		int soma;
		printf("Valores do vetor A.\n");
		for(i=0; i<6; i++){
			printf("%d\n", A[i]);
		}
		
		printf("\nSoma dos valores das posições A[0], A[1] e A[5]: \n%d", soma=A[0]+A[1]+A[5]);
		
		printf("\n\nValor da posição A[4] trocado:\n");
			A[4]=100;
		for(i=0; i<6; i++){
			printf("%d\n", A[i]);
		}
		
		return 0;
		getchar();
	}
