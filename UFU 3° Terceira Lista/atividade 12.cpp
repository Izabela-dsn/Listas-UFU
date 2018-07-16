#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int N, n;
		printf("Coloque um número: ");
		scanf("%i", &N);
		while (n<=N){
			if(N>=0){
			printf("%d\n", N);
			N--;
			}
			}
		
		return 0;
			
	}
	
