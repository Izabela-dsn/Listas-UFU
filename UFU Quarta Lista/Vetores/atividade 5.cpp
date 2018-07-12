#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int cont=0, vet[10], i;
		
		printf("Digite dez números: ");
		for (i=0; i<10; i++)
			scanf("%d", &vet[i]);
			
		for(i=0; i<10; i++){
			if(vet[i]%2==0)//condição para ver se o número guardado é par//
				cont++;
		}
		printf("A quantidade de números pares é: %d", cont);
		
		getch();
		return 0;				
	}
