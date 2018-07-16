#include <stdio.h>
#include <conio.h>

	int main(){
	  double S, TS; //TS é o salário total
		printf("Coloque o valor do salario: ");
		scanf("%lf", &S);
		 TS = (S*25/100) + S;
		printf("O valor do novo salario e: %.2lf", TS);
		
		
		getch();
		return 0;
	}
