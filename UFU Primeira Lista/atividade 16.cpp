#include <stdio.h>
#include <conio.h>

int main(){
	double P, C;
 	printf("Adicione uma valor em Polegadas: ");
	scanf("%lf", &P);
	C=P*2.54;
	printf("O valor convertido em Centimetros e: %.2lf", C);
	
	
	getch();
	return 0;
}
