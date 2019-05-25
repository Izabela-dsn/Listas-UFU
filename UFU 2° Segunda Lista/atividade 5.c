#include <stdio.h>
#include <conio.h>

	int main(){
		int a;
		printf("Digite um numero inteiro:");
		scanf("%i", &a);
		if(a%2==0){
			printf("O numero e par.");
		}
		else{
			printf("O numero e impar.");
		}
		getch();
		return 0;
	}
