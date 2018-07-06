#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main(){
		float p, h, IMC;
		printf("Coloque seu peso em Kg e sua altura, respectivamente: ");
		scanf("%f%f", &p, &h);
		IMC = p/pow(h,2);
		if (IMC<18.5) printf("Abaixo do Peso. %.2f", IMC);
		if((IMC>=18.5)&&(IMC<=24.9)) printf("Saudavel. %.2f", IMC);
		if((IMC>=25.0)&&(IMC<=29.9)) printf("Peso em Excesso %.2f", IMC);
		if((IMC>=30.0)&&(IMC<=34.9)) printf("Obesidade Grau I %.2f", IMC);
		if((IMC>=35.0)&&(IMC<=39.9)) printf("Obesidade Grau II(severa) %.2f", IMC);
		if (IMC>=40.0) printf("Obesidade Grau III(morbida) %.2f", IMC);
		
		
	getch();
	return 0;
	}
