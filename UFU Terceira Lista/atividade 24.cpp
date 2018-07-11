#include <stdio.h>

	int main(){
		int a, i, soma=0;
		printf("Digite um numero: ");
		scanf("%i", &a);
		printf("A soma dos divisores e: ");
		for(i=2; a>0 && i<=a; i++)
		{
			if (a%i==0)
			{
				soma=soma+i;
			}
		}
		printf("%i", soma);	
		
		return 0;
	}
