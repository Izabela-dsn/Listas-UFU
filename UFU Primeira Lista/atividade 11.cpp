#include <stdio.h>
#include <conio.h>

int main() {
	float K, M;
	printf("Coloque o valor de uma velocidade em m/s: ");
	scanf("%f", &M);
	K = M*3.6;
	printf("Valor em Km/h e: %.2f", K);
	
	
	
	
	
	getch();
	return 0;
}
