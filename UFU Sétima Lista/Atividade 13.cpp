#include <stdio.h>
#include <conio.h>
#include <locale.h>

	float menuzinho (float num1, float num2, char contas ){
		setlocale(LC_ALL,"portuguese");
		switch(contas){
			case '+':{
				printf("\nSoma : %.2f", num1+num2);
				break;
			} 
			case '-':{
				printf("\nSubtra��o: %.2f", num1-num2);
				break;
			}
			case '/':{
				printf("\nDivis�o: %.2f", num1/num2);
				break;
			}
			case '*':{
				printf("\nMultiplica��o: %.2f", num1 * num2);
				break;
			}
		}
		getch();
	}
	
	int main(){
		setlocale(LC_ALL,"portuguese");
		float a, b;
		char sinais;
		printf("**Opera��es.**\n\n");
		printf("Digite dois valores: ");
		scanf("%f%f", &a, &b); 
		printf("\nDigite um desses simbolos: + , - , / , * : ");
		scanf(" %c", &sinais);
		
		menuzinho(a,b,sinais);
		
		getch();
		return 0;
	}
