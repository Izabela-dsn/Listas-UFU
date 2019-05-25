#include <stdio.h>
#include <conio.h>
#include <math.h>

/*	PARA TESTE:
	int main(){
		float hipotenusa(float cata, float catb);
		float a, b;
		printf("Adicione os valores dos catetos: ");
		scanf("%f%f", &a, &b);
		
		hipotenusa(a,b);
		
		return 0; 
		getch();
	}*/
	
	float hipotenusa(float cata, float catb){
		float hipot;
		hipot = sqrt(cata*cata+catb*catb);
		printf("O valor da hipotenusa vai ser: %.2f", hipot);
		getch();
	}
