#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		int l, c, mat[3][3];
		setlocale(LC_ALL, "portuguese");
			
			printf("Adicone nove números: ");
			for(l=0; l<3; l++){
				for(c=0; c<3; c++){
					scanf("%i", &mat[l][c]);
					printf(" %i", mat[l][c]);
				}
				printf("\n");
			}
			
			printf("\nMatriz transposta:\n");
			
			for(l=0; l<3; l++){
				for(c=0; c<3; c++){
					printf(" %i", mat[c][l]);
				}
				printf("\n");
			}
			getch();
			return 0;
	}
	
