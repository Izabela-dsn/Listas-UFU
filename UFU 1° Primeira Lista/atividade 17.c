#include <stdio.h>
#include <conio.h>

int main(){
	double C, P;

	printf("Adicione uma valor em centimetros: ");
	scanf("%lf", &C);
	P = C/2.54;
	printf("O valor em polegadas e: %.2lf ", P);


	getch();
	return 0;
}
