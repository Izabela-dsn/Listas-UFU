#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int a;
		printf("Digite um número: ");
		scanf("%i", &a);
		printf("O número digitado foi: %i", a);

		getch();
		return 0;
	}
