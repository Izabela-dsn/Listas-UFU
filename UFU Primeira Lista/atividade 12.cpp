#include <stdio.h>
#include <conio.h>

int main(){
	float M, K;
	printf("Coloque uma distancia em milhas: ");
	scanf("%f", &M);
	K = 1.61 * M;
	printf("A distancia em Km equivale a: %.2f", K);
	
	
	
	
	
	getch();
	return 0;
}
