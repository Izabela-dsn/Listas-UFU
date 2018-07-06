#include <stdio.h>
#include <conio.h>
#include <math.h>
	int main(){
		float a, r, p;
		printf("Coloque qualquer numero:");
		scanf("%f", &a);
		r = sqrt(a);
		p = a*a;
		if (a>0){
			printf("A raiz quadrada desse numero e: %.2f \nEsse numero elevado ao quadrado e: %.2f", r,p);
		}
		else{
		
		}	
		getch();
		return 0;
	}
