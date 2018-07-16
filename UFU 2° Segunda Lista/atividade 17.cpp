#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		float B, b, h, A;
		printf("Coloque as medidas para calcular a área do trapézio: base maior, base menor e altura: ");
		scanf("%f%f%f",&B,&b,&h);
		A = (B+b)*h/2;
		if (B && b > 0){
			printf("Resultado: %.2f", A);
		}
		getch();
		return 0;
	}
