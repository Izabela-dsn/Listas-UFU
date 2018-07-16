#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int N, n;
		printf("Coloque aqui um número:");
		scanf("%i", &N);
		while  (n<=N){
			printf("%d\n", n);
			n++;
		}
		
		return 0;
}
