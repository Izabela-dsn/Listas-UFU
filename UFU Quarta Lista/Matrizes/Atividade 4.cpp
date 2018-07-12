#include <stdio.h>
#include <conio.h>

	int main(){
		int mat[4][4], i, j, posi, posj;
		printf("Adicione 16 numeros:");
		for(i=0; i<4; i++){
			for(j=0; j<4; j++){
				scanf("%d", &mat[i][j]);
				printf("%d ", mat[i][j]);
			}
			printf("\n");
		}
		
		int maior=mat[0][0];
		
		for(i=0; i<4; i++){
			for(j=0; j<4; j++){
				if(mat[i][j]>maior){
					maior=mat[i][j];
					posi=i;
					posj=j;
				}
			}
		}
		printf("O maior elemento: %d\n", maior);
		printf("Posição: [%d][%d]", posi, posj);
		
		getch();
		return 0;
		
		
	}
