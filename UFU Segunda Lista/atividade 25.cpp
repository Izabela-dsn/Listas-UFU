#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int a, b, c, d;
		printf("Para calcular as ra�zes de uma equa��o de segundo grau adicione:\nO n�mero que acompanha o X ao quadrado(a)\nO n�mero que acompanha o X(b)\nE o n�mero sem ic�gnita(c), respectivamente: ");
		scanf("%i%i%i", &a, &b, &c);
		float r;
		if (a!=0){
			printf("O delta �: %i", d = b*b-4*a*c);	
			if (d<0){
				printf("\nN�o existe raiz real.");
			}
				
			if (d == 0){
				printf("\nRaiz �nica: %.2f ", r = -b + sqrt(d)/ 2*a);
			}
			if (d>=0){
				printf("\nRa�zes Reais: %.2f e %.2f", r = -b+sqrt(d)/2*a, r = -b-sqrt(d)/2*a );
			}
			
			}
		else{
			printf ("N�o � equa��o de segundo grau.");
		}
		getch();
		return 0;
	}	
