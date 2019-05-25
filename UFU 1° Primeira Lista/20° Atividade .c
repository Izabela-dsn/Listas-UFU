#include <stdio.h>
#include <conio.h>

int main(){
	double K, L;
	printf("Coloque um valor em Kg: ");
	scanf("%lf", &K);
	L = K/0.45;
	printf("O valor em Libras e: %.2lf", L);


	getch();
	return 0;
}
