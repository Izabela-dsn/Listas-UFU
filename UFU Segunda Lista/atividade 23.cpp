#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		int a;
		setlocale(LC_ALL,"portuguese");
		printf("Descubra se um ano é bissexto.\nColoque um ano de sua escolha aqui:  ");
		scanf("%i", &a);
		if (((a%400==0)||(a%4==0))&&(a%100 !=0)){
			printf("O ano é bissexto.");
		}
		else{
			printf("O ano não é bissexto.");
		}
		getch();
		return 0;
	}
