#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int a, b, c, e;
		printf("Digite 3 números: ");
		scanf("%i%i%i", &a,&b,&c);
		e = a+b+c;
		printf("A soma dos números que voce digitou e: %i", e);

		getch();
		return 0;
	}
