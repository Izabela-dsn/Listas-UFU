#include <stdio.h>
#include <conio.h>

int main(){
	float K, M;
	printf("Coloque uma distancia em Km: ");
	scanf("%f", &K);
	M = K/1.61;
	printf("O valor da distancia em Milhas e: %.2f", M);
	
	
	getch();
	return 0;
}
