#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		float a;
		printf("Digite um n�mero: ");
		scanf("%f", &a);
		printf("O n�mero digitado foi: %.2f", a);

		getch();
		return 0;
	}
