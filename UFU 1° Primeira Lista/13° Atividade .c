#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
	float K, M;

	printf("Coloque uma distância em Km: ");
	scanf("%f", &K);
	 M = K/1.61;
	printf("O valor da distância em Milhas e: %.2f", M);


	getch();
	return 0;
}
