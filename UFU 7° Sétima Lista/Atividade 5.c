#include <stdio.h>
#include <conio.h>

	int main(void){
		float volumesfera (float raio);
		
		float R;
		printf("Para fazer o calculo do volue da esfera adicione o raio: ");
		scanf("%f", &R);
		volumesfera(R);
		
		return 0;
		getch();
	}
	
	float volumesfera (float raio){
		float Volume;
		Volume = 3.14 * (raio * raio * raio) * 4/3;
		printf("O volume da esfera: %.2f", Volume);
		getch();
	}
