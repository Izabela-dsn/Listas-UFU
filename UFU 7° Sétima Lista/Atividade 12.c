#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int somalgarismos(int num){
		setlocale(LC_ALL,"portuguese");
		int soma=0;
		if (num < 0)
			printf("Número inválido.\n");
			
		while (num > 0){
			soma = soma + num % 10;
			num = num / 10;	
		}	
		printf("A soma dos algarismos será: %i", soma);	
	}
/*	PARA TESTE:
	int main(){
		setlocale(LC_ALL,"portuguese");
		int numero;
		printf("***Soma dos algarismos de um número por função.***\n\n");
		printf("Digite um número qualquer: ");
		scanf("%i", &numero);
		somalgarismos(numero);
		
		getch();
		return 0;
	}*/
