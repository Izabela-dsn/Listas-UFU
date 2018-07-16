#include <conio.h>
#include <stdio.h>

	int main(){
		char nome[20], sexo[10];
		int idade;
		
		printf("Digite seu nome: ");
		gets(nome);
		printf("Digite seu sexo: ");
		gets(sexo);
		printf("Digite sua idade: ");
		scanf("%i", &idade);
		
		if(sexo[0] == 'f' || sexo[0] == 'F' && idade < 25)
			printf("\n%s ACEITA", nome);
		else
			printf("\n%s N%cO ACEITA", nome, 199);
		
		getch();
		return 0;
	}
