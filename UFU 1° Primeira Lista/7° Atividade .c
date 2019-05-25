#include <stdio.h>
#include <conio.h>

  int main(){
    float F, C;
	printf("Digite uma temperatura em Fahrenheit: ");
	scanf("%f", &F);
    C = 5.0*(F-32)/9.0;
    printf("Temperatura em Celsius e: %.2f", C);

	getch();
    return 0;
}
