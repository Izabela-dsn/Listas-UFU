#include <stdio.h>
#include <conio.h>

	int tamnome(char nome[]){
		int cont=0;
		while(nome[cont] != '\0'){
			++cont;
		}
		printf("A quantidade de letras desse nome: %i letras.", cont);
		getch();
	}
	
	int main(){
		char nome[20];
		printf("**Quantas letras tem um nome.**\n\n");
		printf("Digite um nome: ");
		gets(nome);
		
		tamnome(nome);
		
		getch();
		return 0;
	}
