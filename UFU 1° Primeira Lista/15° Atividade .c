#include <stdio.h>
#include <conio.h>
#define PI 3.14

int main(){
    double G, R;

    printf("Adicione um valor em radianos: ");
    scanf("%lf", &R);
    G = R*180/PI;
    printf("O valor em graus e: %.2lf", G);

	 getch();
	 return 0;
}
