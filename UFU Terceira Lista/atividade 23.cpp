#include <stdio.h>

	int main(){
		int a, i;
		i=1;
		printf("Digite um numero positivo:");
		scanf("%i", &a);
		printf("Os divisores do numero digitado:\n");
		while (a>0 && i<=a){
			i++;
			if (a%i==0) printf("%i\t", i);
		}
		return 0;
	}
