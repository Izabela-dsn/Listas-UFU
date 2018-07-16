#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		int d, m, a;
		printf("Coloque uma data completa.\nComo no exemplo dd/mm/aaaa\nData:");
		scanf("%i%i%i", &d, &m, &a);
		if((m>=1)&&(m<=12)){
			if (((a%400==0)||(a%4==0))&&(a%100 !=0)){
				if((m==2)&&(d>=30)){
					printf("data inválida");
				}
			}
		}
		getch();
		return 0;
	}
