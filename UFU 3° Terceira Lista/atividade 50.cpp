#include <stdio.h>
#include <locale.h>
#include <conio.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		float c=1.50, z=1.10; 
		int i=0;
		printf("Quantos anos terá Zé para ele ser maior que Chico?\nZé tem 1.10 metros enquanto Chico tem 1.50 metros.\n");
		while(z<=c){
			z+= 0.03;
			c+= 0.02;
			i=i+1;
		}
			printf("\nA resposta é: %d anos\t ", i);
		return 0;
		getch();
	}
