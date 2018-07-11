#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int i=0, n, h=1;
		printf("Digite quantos números ímpares deseja mostrar: ");
		scanf("%d", &n);
		printf("\nEsses são os números:\n");
		while(n>0 && i<n){
				printf("%d\t", h);
				i++;
				h=h+2;	
		}
		return 0;
		getch();
	}
