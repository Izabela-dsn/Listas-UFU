#include <stdio.h>
#include <conio.h>

	int main(){
		float c, l, p, T;
		printf("Coloque o comprimento do terreno, a largura do terreno e o valor do metro da tela respectivamente: ");
		scanf ("%f %f %f", &c, &l, &p);
		T = p * (c * l);
		printf("O custo para cercar o terreno e: %.2f", T );
	getch();
	return 0;	
		 
	}
