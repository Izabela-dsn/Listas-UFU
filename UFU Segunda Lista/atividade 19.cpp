#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		int n;
		setlocale(LC_ALL,"portuguese");
		printf("Coloque um número inteiro: ");
		scanf("%i", &n);
		if((n%3== 0) && (n%5== 0)){
			printf("pode ser divisível por 5 e 3");
		}
		else{
		
			printf("divisível por 5 ou 3");
		}
		
		return 0;
		getch();
	}
