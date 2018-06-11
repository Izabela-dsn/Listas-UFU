#include <stdio.h>
#include <conio.h>
#define PI 3.14
	int main(){
		double G, R;
			printf("Adicione um valor em graus: ");
			scanf("%lf", &G);
			R = (G * PI)/180;
			printf("O valor em radiano e: %.2lf", R);
				
		getch();
		return 0;
	}
