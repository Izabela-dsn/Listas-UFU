#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		float k, l;
		setlocale(LC_ALL,"portuguese");
		printf("Coloque uma dist�ncia em Km e a quantidade de gasolina em Litros que foi consumida: ");
		scanf("%f%f", &k, &l);
		if (k/l > 14){ //mudei o valor do enunciado de 12 para 14 pois n�o teria l�gica//
			printf("Super econ�mico!");
		}
		if(k/l < 8){
			printf("Venda o carro!");
		}
		if((k/l>8)&&(k/l<12)){
			printf("Econ�mico!");
		}
		getch();
		return 0;
	}
