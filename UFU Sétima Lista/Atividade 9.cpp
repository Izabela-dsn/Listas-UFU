#include <stdio.h>
#include <conio.h>
#define PI 3.141592

	float volumecilindro (float alt, float raio){
		float V;
		V = PI * (raio*raio) * alt;
		printf("O volume do cilindro vai ser: %.2f ", V);
		getch();
	}
	
/*	PARA TESTE:
	int main(){
		float H, R;
		printf("dois valores: ");
		scanf("%f%f", &H,&R);
		volumecilindro(H,R);
		
		getch();
		return 0;
	}*/
