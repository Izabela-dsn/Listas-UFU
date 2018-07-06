#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int e;
		printf("Escolha um Estado para o envio:\n1-Minas Gerais\n2-São Paulo\n3-Rio de janeiro\n4-Mato Grosso do Sul\nOpção: ");
		scanf("%i", &e);
		float v;
		printf("Valor da Mercadoria: ");
		scanf("%f", &v);
		switch(e){
			case 1: printf("O valor da mercadoria ficou em: %.2f", v*7/100 + v);
					break;
			case 2: printf("O valor da mercadoria ficou em: %.2f", v*12/100 + v);
					break;
			case 3: printf("O valor da mercadoria ficou em: %.2f", v*15/100 +v);
					break;
			case 4: printf("O valor da mercadoria ficou em: %.2f", v*8/100 +v);
					break;
					
		default: printf("Estado não listado, por favor tente novamente.");	
		}
		
		
		
		getch();
		
		
		return 0;
	}
