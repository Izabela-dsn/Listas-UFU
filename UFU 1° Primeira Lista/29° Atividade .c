#include <stdio.h>
#include <conio.h>

	int main(){
		float a, b, c, d, M;
		printf("Coloque quatro notas avaliativas: ");
		scanf("%f %f %f %f", &a,&b,&c,&d);
		M = (a+b+c+d)/4;
		printf("A media das notas e: %.2f", M);
		
		
		getch();
		return 0;
	}
