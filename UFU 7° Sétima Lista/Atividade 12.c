#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int somalgarismos(int num){
		setlocale(LC_ALL,"portuguese");
		int soma=0;
		if (num < 0)
			printf("N�mero inv�lido.\n");
			
		while (num > 0){
			soma = soma + num % 10;
			num = num / 10;	
		}	
		printf("A soma dos algarismos ser�: %i", soma);	
	}
/*	PARA TESTE:
	int main(){
		setlocale(LC_ALL,"portuguese");
		int numero;
		printf("***Soma dos algarismos de um n�mero por fun��o.***\n\n");
		printf("Digite um n�mero qualquer: ");
		scanf("%i", &numero);
		somalgarismos(numero);
		
		getch();
		return 0;
	}*/
