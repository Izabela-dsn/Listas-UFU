#include <stdio.h>
#include <conio.h>
	int main(){
		int a, b, c;
		printf("Digite dois numeros inteiros:");
		scanf("%i%i", &a, &b);
		c = a-b;
		if(a>b){
			printf("O maior numero e: %i \nE a diferenca entre eles e de: %i", a,c);
		}else{
			printf("O maior numero e: %i \nE a diferenca entre eles e de: %i", b,c);
		}
		getch();
		return 0;
	}
