#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		float a, n;
		printf("Coloque o preço antigo da mercadoria: ");
		scanf("%f", &a);
		if (a<50.00){
			printf("Preço Novo: %.2f", n =a + a*5/100);
				if (n<80.00){
					printf("\nBarato");
			}	
		}
		if ((a>=50.00)&&(a<=100.00)){
			printf("Preço Novo %.2f", n = a+a*10/100);
				if(n<80.00){
					printf("\nBarato");
				}
				if((n>=80.00)&&(n<=120.00)){
					printf("\nNormal");
				}
		}
		if (a>100){
			printf("Preço Novo: %.2f", n = a+a*15/100);
			    if((n>=80.00)&&(n<=120.00)){
				printf("\nNormal");
			    }
				if((n>120.00)&&(n<=200.00)){
					printf("\nCaro.");
				}
				if(n>200.00){
					printf("\nMuito Caro.");
				}
		}	
		
	
		getch();
		return 0;
	}
