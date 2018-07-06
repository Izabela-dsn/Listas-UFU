#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		int e;
		setlocale(LC_ALL,"portuguese");
		printf("Escolha uma opção:\n 1- Soma de 2 números.\n 2- Diferença entre 2 números.\n 3- Produto entre 2 números.\n 4- Divisão entre 2 números.\n Opção: ");
		scanf("%i", &e);
		float a, b;
		printf("Adicione dois números: ");
		scanf("%f%f", &a, &b);
		switch(e){
			case 1: printf("Resultado: %.2f", a+b);
					break;
			case 2: if (a>b){
					printf("Resultado: %.2f", a-b);
				}
			 	else{
			 		printf("Resultado: %.2f", b-a);
				 }
				 break;
			case 3:	printf("Resultado: %.2f", a*b);
				break;
			case 4: if(a/b)
					printf("Resultado: %.2f", a/b);
				else{
					printf("o denominador não pode ser zero");
				}	
				break;
				 
			default: printf("Opção Inválida.");
			}
		
		getch();
		return 0;	
}
