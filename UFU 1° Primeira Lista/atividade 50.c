#include <stdio.h>
#include <conio.h>

	int main(){

		int N, Ano, I;
		printf("Coloque sua idade e o ano em que estamos: ");
		scanf("%i%i", &I, &Ano);
		N = Ano - I-1;
		printf("O ano em que voce nasceu e: %i", N);

		getch();
		return 0;
	}
