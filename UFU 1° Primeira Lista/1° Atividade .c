#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int a;
		printf("Digite um n�mero: ");
		scanf("%i", &a);
		printf("O n�mero digitado foi: %i", a);

		getch();
		return 0;
	}
