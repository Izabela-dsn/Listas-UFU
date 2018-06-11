#include <stdio.h>
#include <conio.h>

	int main(){
	   double N, D, TD; //o D é a minha variável de desconto 
		printf("Adicione o valor de alguma mercadoria: ");
		scanf("%lf", &N);
		 D = N * 12/100; TD= N-D;
		  printf("O gerente ficou maluco !!! O valor com descontao de 12 por cento para voce vai ser de: %.2lf", TD);
		
		
		
		getch();
		return 0;
	}
