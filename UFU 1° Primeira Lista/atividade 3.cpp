#include <stdio.h>
#include <conio.h>

	int main(){
		int a, b, c, e;
		printf("Digite 3 numeros: ");
		scanf("%i%i%i", &a,&b,&c);
		e = a+b+c;
		printf("A soma dos numeros que voce digitou e: %i", e);
		
		getch();
		return 0;
	}
