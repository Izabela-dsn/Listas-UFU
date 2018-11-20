#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

	float M, K;
	printf("Coloque uma distância em milhas: ");
	scanf("%f", &M);
	 K = 1.61 * M;
	printf("A distância em Km equivale a: %.2f", K);

	getch();
	return 0;
}
