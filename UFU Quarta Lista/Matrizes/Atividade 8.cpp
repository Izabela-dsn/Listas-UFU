#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		int mat[3][3], i, j, somacima;
		setlocale(LC_ALL,"portuguese");
		printf("Adicione nove n�meros: ");
		
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				scanf("%i", &mat[i][j]);
				printf(" %i", mat[i][j]);
			}
			printf("\n");
		}
		
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(j>i){
					somacima += mat[i][j];
				}	
			}
		}
			printf("\n Soma dos n�meros acima da diagonal principal: %i ", somacima);
			
			return 0;
			getch();
			
	}
