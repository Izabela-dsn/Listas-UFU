#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		int dobro (int g);
		setlocale(LC_ALL,"portuguese");
		printf("****O dobro do número recebido feito por função.****\n\n");
		
		int n, resposta;
		printf("Digite um número: ");
		scanf("%i", &n);
		resposta = dobro(n);
		printf("O dobro do número digitado: %i", resposta);
		
		
		return 0;
		getch();
	}
	
	int dobro (int numero){
		
		int result;
		result = numero * 2;
		return result;
	}
