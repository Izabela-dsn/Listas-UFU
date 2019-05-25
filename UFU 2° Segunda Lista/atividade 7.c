#include <stdio.h>
#include <conio.h>
	int main(){
		float a, b;
		printf("Digite dois numeros:");
		scanf("%f%f", &a, &b);
		if (a>b){
			printf("o maior numero e: %.1f", a);
			
		}
		if(a==b){
				printf("os numeros sao iguais.");
			}
		else{
			printf("o numero maior e: %.1f",b);
		}
		getch();
		return 0;
	}
