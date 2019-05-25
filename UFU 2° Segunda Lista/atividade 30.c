#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		float a, b, c;
		printf("Adicione 3 números: ");
		scanf("%f%f%f", &a, &b, &c);
		if ((a<b)&&(b<c)&&(a<c)){
			printf("Ordem crescente: %.1f  %.1f  %.1f", a,b,c);
				}
		if((a<c)&&(c<b)&&(a<b)){
				printf("\nOrdem crescente: %.1f %.1f %.1f", a, c, b);
		}			
		if((b<a)&&(a<c)&&(b<c)){
			printf("Ordem crescente: %.1f %.1f %.1f", b, a, c);
				}	
		if((b<c)&&(c<a)&&(b<a)){
			printf("Ordem crescente: %.1f %.1f %.1f", b, c, a);
				}	
		if ((c<a)&&(a<b)&&(c<b)){
			printf("Ordem crescente: %.1f %.1f %.1f", c, a, b);
				}	
		if ((c<b)&&(b<a)&&(c<a)){
			printf("Ordem crescente: %.1f %.1f %.1f", c, b, a);	
			}
			
		getch();
		return 0;
	}
