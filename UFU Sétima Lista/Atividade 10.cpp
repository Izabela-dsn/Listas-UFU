#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		int quememaior (int n1, int n2);
		setlocale(LC_ALL,"portuguese");
		int a, b;
		printf("Quem é maior com função.\n\nDigite dois números: ");
		scanf("%i%i", &a, &b);
		quememaior(a,b);
	
		return 0;
		getch();
	}
	
	int quememaior (int n1, int n2){
		setlocale(LC_ALL,"portuguese");
		if (n1>n2)
			printf("\nO número %i é maior.", n1);
		else 
			printf("\nO número %i é maior.", n2);	
		getch();
		
	}
