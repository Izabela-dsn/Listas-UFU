#include <stdio.h>
#include <conio.h>
	int main(){
		double v, d, p, c1, c2;
		printf("Coloque o valor da venda:");
		scanf("%lf", &v);
		d = v - (v * 10/100);
		p = v/3;
		c1 = v * 15/100;
		c2 = v/3 * 10/100;
		printf("Total a pagar com desconto de 10 por cento : %.2lf \n", d);
		printf("Valor de cada parcela dividindo em 3 vezes: %.2lf \n", p);
		printf("Comissao do vendedor no valor total com desconto:%.2lf\n", c1 );
		printf("Comissao sobre a venda parcelada: %.2lf \n", c2 );
	getch();
	return 0;
	}
	
