#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		int a;
		setlocale(LC_ALL,"portuguese");
		printf("Descubra se um ano � bissexto.\nColoque um ano de sua escolha aqui:  ");
		scanf("%i", &a);
		if (((a%400==0)||(a%4==0))&&(a%100 !=0)){
			printf("O ano � bissexto.");
		}
		else{
			printf("O ano n�o � bissexto.");
		}
		getch();
		return 0;
	}
