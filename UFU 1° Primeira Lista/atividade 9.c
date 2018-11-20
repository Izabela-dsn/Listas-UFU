#include <stdio.h>
#include <conio.h>

int main(){
	   float C, K;
	  printf("Digite uma temperatura em Graus Celsius: ");
	  scanf("%f", &C);
		K = C + 273.15;
	  printf("Temperatura em Kelvin: %.2f", K);



	  getch();
	  return 0;
}
