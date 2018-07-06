#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int a, b, c, d;
		printf("Para calcular as raízes de uma equação de segundo grau adicione:\nO número que acompanha o X ao quadrado(a)\nO número que acompanha o X(b)\nE o número sem icógnita(c), respectivamente: ");
		scanf("%i%i%i", &a, &b, &c);
		float r;
		if (a!=0){
			printf("O delta é: %i", d = b*b-4*a*c);	
			if (d<0){
				printf("\nNão existe raiz real.");
			}
				
			if (d == 0){
				printf("\nRaiz única: %.2f ", r = -b + sqrt(d)/ 2*a);
			}
			if (d>=0){
				printf("\nRaízes Reais: %.2f e %.2f", r = -b+sqrt(d)/2*a, r = -b-sqrt(d)/2*a );
			}
			
			}
		else{
			printf ("Não é equação de segundo grau.");
		}
		getch();
		return 0;
	}	
