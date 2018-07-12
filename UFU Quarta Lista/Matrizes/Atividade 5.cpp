#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int mat[5][5], i, j, x;
		
		printf("Digite 25 números para a matriz: ");
		for(i=0; i<5; i++){
			for(j=0; j<5; j++){
				scanf("%d", &mat[i][j]);
				printf("%d ", mat[i][j]);
			}
			printf("\n");
		}
		
		printf("\nAdicione mais um número: ");
		scanf("%d", &x);
		
		printf("\nO número digitado foi repetido nessa(s) localização(ões) da matriz:");
		for (i=0; i<5; i++){
			for(j=0; j<5; j++){
				if(mat[i][j] == x){
					printf("[%d][%d]", i, j);
				}
			//	else printf("\nNúmero não encontrado.");
			}
		}
		getch();
		return 0;
	}
