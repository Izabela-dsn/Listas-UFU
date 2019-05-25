#include <stdio.h>
#include <conio.h>

int main(){
    float a, b;
	printf("Digite qualquer valor: ");
	scanf("%f", &a);
    b = a/5;
	printf("A quinta parte desse valor e: %.2f", b);

    getch();
    return 0;
}
