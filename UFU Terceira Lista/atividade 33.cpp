#include <stdio.h>

	int main(){
		int n, i, j, c=0, m=0;
		printf("Digite um número positivo: ");
		scanf("%d", &n);
		printf("Digite dois numeros inteiros positivos: ");
		scanf("%d %d", &i,&j);
		printf("Multiplos de %d e/ou %d:\n", i, j);
		while (c<n){
			if(m%i==0||m%j==0){
				printf("%d\t", m);
				c++;
			}
		m++;
			
		}
		return 0;
	}
