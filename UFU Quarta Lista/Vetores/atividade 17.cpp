#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int  vet[10], i;
		printf("Digite 10 números de sua escolha: ");
		for(i=0; i<10; i++){
			scanf("%d", &vet[i]);
		}
		printf("Os números com valor negativo será substituido por 0:\n");
		for(i=0; i<10; i++){
			if (vet[i]<0)
			vet[i]=0;
			printf("%d\t", vet[i]);
		}
		
		getch();
		return 0;
	}
