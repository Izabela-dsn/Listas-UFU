#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		float a, c;
		setlocale(LC_ALL,"portuguese");
		printf("Coloque o custo de fábrica do carro: ");
		scanf("%f", &c);
		if (c<12.000) printf("O custo do consumidor: %.3f", a = c+c*5/100);
		if ((c>=12.000)&&(c<=25.000)) printf("O custo do consumidor: %.3f", a = c+c*10/100+c*15/100);
		if (c>25.000) printf("O custo do consumidor: %.3f", a = c+c*15/100+c*20/100);
	getch();
	return 0;	
	}
	
