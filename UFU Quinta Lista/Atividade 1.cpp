#include <stdio.h>
#include <conio.h>

	int main(){
		char frase[50];
		printf("**Digite uma frase: ");
		gets(frase);
		printf("\n\n**A frase digitada: %s", frase);
		
		getch();
		return 0;
	}
