#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL, "portuguese");
		printf("*******Armazenando informações de uma pessoa em uma struct!********\n\n");
		
		struct dados{
			char nome[25];
			int idade;
			char moradia[30];
		};
		
		struct dados pessoal;
		
		printf("Digite seu nome: ");
		gets(pessoal.nome);
		
		printf("Digite sua idade: ");
		scanf("%i", &pessoal.idade);
		
		fflush(stdin);
		
		printf("Digite seu endereço: ");
		gets(pessoal.moradia);
		
		
		printf("\n**Suas Informacões:\n");
		printf("Nome: %s\n", pessoal.nome);
		printf("Idade: %i\n", pessoal.idade);
		printf("Endereço: %s", pessoal.moradia);
		
		getch();
		return 0;
	}
