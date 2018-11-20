#include <stdio.h>
#include <conio.h>

  int main(){
    float C, F;
	printf("Digite uma temperatura em Graus Celsius: ");
	scanf("%f", &C);
    F = C*(9.0/5.0) + 32.0;
	printf("Temperatura em Fahrenheit: %.2f", F);

    getch();
    return 0;
}
