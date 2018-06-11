#include <stdio.h>
#include <conio.h>

	int main(){
		double M, J;
		printf("Coloque o comprimento em Metros: ");
		scanf("%lf", &M);
		J = M/0.91;
		printf("O comprimento em Jardas e: %.2lf", J);
		
		
		
		getch();
		return 0;
	}
