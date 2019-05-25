#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		float a;
		printf("Digite um número: ");
		scanf("%f", &a);
		printf("O número digitado foi: %.2f", a);

		getch();
		return 0;
	}
