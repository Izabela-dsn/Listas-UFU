#include <stdio.h>
#include <conio.h>

	int main(){
		float K, C;
	  printf("Coloque o valor de uma temperatura em Kelvin: ");
	  scanf("%f", &K);
	   C = K - (273.15);
	  printf("Temperatura em Celsius: %.2f", C);
		
		
	 getch();
	return 0;
	}
