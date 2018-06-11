#include <stdio.h>
#include <conio.h>

	int main(){
		double L, K;
		printf("Coloque um valor em Libras: ");
		scanf("%lf", &L);
		K = L * 0.45;
		printf("O valor em Quilogramas e: %.2lf", K);
		
	getch();
	return 0;
	}
