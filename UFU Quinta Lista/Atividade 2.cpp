#include <stdio.h>
#include <conio.h>

	int tamanho(char string[]){
		int num = 0;
		while(string[num] != '\0'){
			++num;
		}
		++num;
		return (num);
	}
	
	int main(){
		char stringdada[50];
		printf("      **Contagem de caracteres.**\n\n");
		printf("Digite alguma frase e/ou palavra(string): ");
		gets(stringdada);
		
		int numero = tamanho(stringdada);
		printf("\n  A string acima tem %i caracteres.", numero);
		
		getch();
		return 0;
	}
