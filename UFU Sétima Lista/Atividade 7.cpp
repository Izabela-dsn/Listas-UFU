#include <stdio.h>
#include <conio.h>

	float conversaocelsiuFah (float Cel){
		 float Fah;
		 Fah = Cel * (9.0/5.0) + 32.0;
		 printf("A temperatura convertida em Fahrenheit: %.2f", Fah);
		 getch();
	}
	
/*	PARA TESTE :
	int main(){
		float C;
		scanf("%f", &C);
		
		conversaocelsiuFah(C);
		
		return 0;
		getch();
	}*/ 
