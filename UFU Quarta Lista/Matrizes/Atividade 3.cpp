#include <conio.h>
#include <stdio.h>
#include <locale.h>

	int main(){
		int mat[4][4], i, j;
		
		printf("Matriz preenchida como produto do valor da linha e da coluna:\n\n");
		for(i=0; i<4; i++){
			for(j=0; j<4; j++){
				printf("%d ", mat[i][j]=i*j);
			}
			printf("\n");
		}
		 
		 return 0;
		 getch();
	}
