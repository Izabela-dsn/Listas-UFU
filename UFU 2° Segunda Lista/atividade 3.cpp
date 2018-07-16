#include <stdio.h>
#include <conio.h>
#include <math.h>
	int main(){
		float a, r, p;
		printf("Coloque um numero: ");
		scanf("%f", &a);
		r = sqrt(a*-1);//raiz quadrada de número negativo é complicado rsrsrs//
		p = a*a;
		if(a>0){
			printf("O quadrado desse numero e: %.1f", p);
		}
		else{
			printf("A raiz quadrada desse numero e: %.0f.i", r);
		}
		getch();
		return 0;
	}
