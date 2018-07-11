#include <stdio.h>
#include <conio.h>

	int main(){
		int n, i, soma;
		printf("Digite um valor: ");
		scanf("%d", &n);
		soma = 0;
		i=1;
		while(i<=n){
			soma=soma+i;
			i=i+1;
		}
		printf("A soma dos %d primeiros inteiros vai ser: %d\n ", n, soma);
		return 0;
	}
