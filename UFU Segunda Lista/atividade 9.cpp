#include <stdio.h>
#include <conio.h>
#include <locale.h>
	int main(){
		double s, p, T;
		setlocale(LC_ALL,"portuguese");
		printf("Coloque o valor do seu sal�rio e da presta��o do empr�stimo respectivimante:");
		scanf("%lf%lf", &s,&p);
		T = s * 20/100;
		if (p > T){
			printf("\nEmpr�stimo n�o concedido.");
		}
		else{
			printf("\nEmpr�stimo concedido.");
		}
		
		getch();
		return 0;
	}
