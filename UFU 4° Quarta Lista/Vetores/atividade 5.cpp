#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int cont=0, vet[10], i;
		
		printf("Digite dez n�meros: ");
		for (i=0; i<10; i++)
			scanf("%d", &vet[i]);
			
		for(i=0; i<10; i++){
			if(vet[i]%2==0)//condi��o para ver se o n�mero guardado � par//
				cont++;
		}
		printf("A quantidade de n�meros pares �: %d", cont);
		
		getch();
		return 0;				
	}
