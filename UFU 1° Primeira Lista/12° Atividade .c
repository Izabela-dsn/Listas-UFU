#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

	float M, K;
	printf("Coloque uma dist�ncia em milhas: ");
	scanf("%f", &M);
	 K = 1.61 * M;
	printf("A dist�ncia em Km equivale a: %.2f", K);

	getch();
	return 0;
}
