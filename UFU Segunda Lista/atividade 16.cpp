#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int m;
		printf("Digite um número entre 1 e 12: ");
		scanf("%i", &m);
		switch (m){
			case 1: printf("Janeiro");
				break;
			case 2: printf("Fevereiro");
				break;
			case 3: printf("Março");
				break;
			case 4: printf("Abril");
				break;
			case 5: printf("Maio");
				break;
			case 6: printf("Junho");
				break;
			case 7: printf("Julho");
				break;
			case 8: printf("Agosto");
				break;
			case 9: printf("Setembro");
				break;
			case 10: printf("Outubro");
				break;
			case 11: printf("Novembro");
				break;
			case 12: printf("Dezembro");
				break;
		}
		getch();
		return 0;
	}
