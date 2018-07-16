#include <stdio.h>
#include <conio.h>

	int main(void){
		char stringao[20];
		char letra1, letra2;
		int y;
		
		printf("Digite uma frase(string): ");
		gets(stringao);
		printf("Digite uma letra: ");
		scanf("%c", &letra1);
		fflush(stdin);
		printf("Digite outra letra: ");
		scanf("%c", &letra2);
		
		for(y=0; y<20; y++){
			if(stringao[y]==letra1){
				stringao[y]=letra2;
			}
		}
		printf("Palavra com a letra '%c' substituindo a letra '%c': %s",letra2,letra1, stringao);
		
		getch();
		return 0;
	}
