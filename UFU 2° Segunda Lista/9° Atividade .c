#include <stdio.h>
#include <conio.h>
#include <locale.h>
	int main(){
		double s, p, T;
		setlocale(LC_ALL,"portuguese");
		printf("Coloque o valor do seu salário e da prestação do empréstimo respectivimante:");
		scanf("%lf%lf", &s,&p);
		T = s * 20/100;
		if (p > T){
			printf("\nEmpréstimo não concedido.");
		}
		else{
			printf("\nEmpréstimo concedido.");
		}
		
		getch();
		return 0;
	}
