#include <conio.h>
#include <stdio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL, "portuguese");
		char palavra[10];
		int i;
		
		
		printf("Imprimindo palavra de tr�s para frente.\n\n");
		
		printf("Escreva uma palavra com at� 8 letras: ");
		for(i=0; i<10; i++){
			scanf("%c", &palavra[i]);
		}
		printf("\nPalavra ao contr�rio: ");
		for(i=9; i>=0; i--){
			printf("%c", palavra[i]);
		}
		
		return 0; 
		getch();
	}
