#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		int quememaior (int n1, int n2);
		setlocale(LC_ALL,"portuguese");
		int a, b;
		printf("Quem � maior com fun��o.\n\nDigite dois n�meros: ");
		scanf("%i%i", &a, &b);
		quememaior(a,b);
	
		return 0;
		getch();
	}
	
	int quememaior (int n1, int n2){
		setlocale(LC_ALL,"portuguese");
		if (n1>n2)
			printf("\nO n�mero %i � maior.", n1);
		else 
			printf("\nO n�mero %i � maior.", n2);	
		getch();
		
	}
