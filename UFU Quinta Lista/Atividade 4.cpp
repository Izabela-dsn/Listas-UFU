#include <stdio.h>
#include <conio.h>

	int main(){
		char nome[20];
		printf("**Quatro primeiras letras do nome**\n\n");
		printf("Digite um nome: ");
		gets(nome);
		
		printf("\n");
		
		int i;
		for(i=0; i<nome[i]; i++){
			if(i<4)
			printf(" %c ", nome[i]);
		}
		getch();
		return 0;
		
	}
