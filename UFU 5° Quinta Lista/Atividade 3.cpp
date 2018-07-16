#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		char nome[20];
		printf("**Printf somente com 'A' ou 'a' no começo do nome.**\n\n");
		printf("Digite um nome: ");
		gets(nome);
		
		if(nome[0] == 'a' || nome[0] == 'A'){
			printf("%s", nome);
		}
		
		getch();
		return 0;
	}
