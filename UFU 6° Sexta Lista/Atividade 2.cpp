#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL, "portuguese");
		printf("*******Armazenando informa��es de uma pessoa em uma struct!********\n\n");
		
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
		
		printf("Digite seu endere�o: ");
		gets(pessoal.moradia);
		
		
		printf("\n**Suas Informac�es:\n");
		printf("Nome: %s\n", pessoal.nome);
		printf("Idade: %i\n", pessoal.idade);
		printf("Endere�o: %s", pessoal.moradia);
		
		getch();
		return 0;
	}
