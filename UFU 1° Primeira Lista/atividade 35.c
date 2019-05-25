#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main(){
	  double a, b, hipotenusa;
		printf("Coloque o valor de dois catetos: \n");
		scanf("%lf %lf", &a, &b);
	    	hipotenusa = sqrt((a*a)+ (b*b));
		printf("O valor da hipotenusa e: %.2lf", hipotenusa);
		
		getch();
		return 0;
	}
