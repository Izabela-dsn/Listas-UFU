#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int  main(){
		setlocale(LC_ALL,"portuguese");
		int l;
		printf("Digite um n�mero de 1 a 7: ");
		scanf("%i", &l);
		switch (l){
			case 1: printf("Domingo");
				break;
			case 2: printf("Segunda-Feira");
				break;
			case 3: printf("Ter�a-Feira");
				break;
			case 4: printf("Quarta-Feira");
				break;
			case 5: printf("Quinta-Feira");
				break;
			case 6: printf("Sexta-Feira");
				break;
			case 7:	printf("S�bado");
				break;
			default: printf("N�mero inv�lido.\nAperte Enter duas vezes.");
		}
		
		
		getch();
		return 0;
	}
