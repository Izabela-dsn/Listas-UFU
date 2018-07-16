#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

	int main(){
		int l, c, mat[4][4];
		
			printf("Matriz [4][4] com numeros de 1 a 20.\n");
			
			for(l=0; l<4; l++){
				for(c=0; c<4; c++){
					mat[l][c] = (rand() %20)+1;
					printf("   %i", mat[l][c]);
				}
				printf("\n");
			}
			printf("\n");
			
			for(l=0; l<4; l++){
				for(c=l+1; c<4; c++)
					mat[l][c]= 0;
			}
			
			printf("Matriz triangular inferior:\n");
			for(l=0; l<4; l++){
				for(c=0; c<4; c++){
					printf("   %i", mat[l][c]);
				}
				printf("\n");
			}
			
			getch();
			return 0;
	}
