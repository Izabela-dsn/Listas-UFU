#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int  main(){
		setlocale(LC_ALL,"portuguese");
		int l;
		printf("Digite um número de 1 a 7: ");
		scanf("%i", &l);
		switch (l){
			case 1: printf("Domingo");
				break;
			case 2: printf("Segunda-Feira");
				break;
			case 3: printf("Terça-Feira");
				break;
			case 4: printf("Quarta-Feira");
				break;
			case 5: printf("Quinta-Feira");
				break;
			case 6: printf("Sexta-Feira");
				break;
			case 7:	printf("Sábado");
				break;
			default: printf("Número inválido.\nAperte Enter duas vezes.");
		}
		
		
		getch();
		return 0;
	}
