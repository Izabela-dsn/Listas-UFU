#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		int dobro (int g);
		setlocale(LC_ALL,"portuguese");
		printf("****O dobro do n�mero recebido feito por fun��o.****\n\n");
		
		int n, resposta;
		printf("Digite um n�mero: ");
		scanf("%i", &n);
		resposta = dobro(n);
		printf("O dobro do n�mero digitado: %i", resposta);
		
		
		return 0;
		getch();
	}
	
	int dobro (int numero){
		
		int result;
		result = numero * 2;
		return result;
	}
