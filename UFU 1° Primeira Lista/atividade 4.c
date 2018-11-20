#include <stdio.h>
#include <conio.h>
#include <math.h>

 int main(){
    float a, b;
	printf("Digite qualquer valor: ");
    scanf("%f", &a);
    b = pow(a,2);
	printf("o quadrado desse valor e: %.2f", b);

    getch();
    return 0;
}
