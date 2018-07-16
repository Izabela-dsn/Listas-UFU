#include <conio.h>
#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int a, i=0, d;// a -> é o número que o usuario irá colocar d->é o número que vai dividir//
		printf("Digite um número inteiro para verificar se ele é primo: ");
		scanf("%d", &a);
		for (d=1;d<=a;d++){
			if(a%d==0){
			i++;
		}
		}
		if (i==2) printf("\nO número %d é primo", a);
		else printf("\nO número %d não é primo.", a);
			
		
		getch();
		return 0;
	}
